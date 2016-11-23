#include <stdio.h>

void Installment(float amount, int months, float interest, float *installment);

	main() {
		float amount,salary,installment,interest=1.08;
		int months,year=0,i=12;
		
		printf ("Enter the amount you would like to borrow (in EUR): ");
		scanf ("%f",&amount);
		
		printf ("\nInterest for the first 12 months is 8 percent.\n\n");
		
		printf ("Months: ");
		scanf ("%d",&months);
		do {
			if (months>i)
				year++;
		i=i+12;
		} while(months>i);
		
		printf ("Your salary pm: ");
		scanf ("%f",&salary);
		
		Installment(amount,months,interest,&installment);
		printf ("Installment pm: %.2f",installment);
	}
void Installment(float amount, int months, float interest, float *installment) {
	if (months>12){
		
	}
	*installment=((amount)*(interest))/(months);
}
//doba splatnosti +11 /12

