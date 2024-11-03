#include<stdio.h>
int main(){
	float principal,time,rate,simpleInterest;
	
	//Prompt user for input
	printf("Enter the principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter the time in (years): ");
	scanf("%f", &time);
	
	printf("Enter the rate in(%%): ");
	scanf("%f", &rate);
	
	//Calculate simple interest
	simpleInterest = (principal * rate *time)/100;
	
//	Display the result
	printf("The simple interest is:%2f\n", simpleInterest);
	
	return 0;
}