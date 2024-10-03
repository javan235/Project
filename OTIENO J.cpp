#include <stdio.h>

int main () {
	int age,income;
	
	// Prompt user for age and income
	printf("Enter your age: ");
	scanf("%d" , &age);
	printf("Enter your annual income: ");
	scanf("%f" ,&income);
	
	// Check if the customer qualifies for a loan 
	if (age>=21 & income >= 21000) {
		printf("Congraulations you qualify for a loan. ");
	} else {
		printf("Unfortunately, we are unable to offer you a loanthis time.");
		
		
	}
	
	return 0;
}