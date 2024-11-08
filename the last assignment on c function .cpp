//C functions
#include<stdio.h>

void checkEvenOrOdd(int number){
	if(number % 2== 0){
		printf("The number is even \n");
		
	}else {
		printf("The number is odd nmber \n");
	}
}
int main(){
	int num;
	
	//Ask the user for input
	printf("Enter a number: ");
	scanf("%d",&num);
	
	//Call the function to chec if it is even or odd
	checkEvenOrOdd(num);
	
	return 0;
}