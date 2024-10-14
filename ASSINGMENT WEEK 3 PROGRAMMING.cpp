//variables and Data Types-single line comment
/*
Variables and Data Types
Authors:Javan
Reg No:ED102/G/19761/23
Date:18/5/2006
*/
// preprocessor scanf(),printf(),
#include<stdio.h>
int main(){
char a = 'h';
char name[]={"Javan"};
int age = 19;
float salary = 2000.50;
double budget = 1000000;
printf("Please Enter a character: ");
scanf("%c", &a);
printf("This is a character a %c \n", a);

printf("Enter your name: ");
scanf("%s", &name);
printf("The name is  %s \n", name);

printf("Enter your age: ");
scanf("%d", &age);
printf("The age is %d \n", age);

printf("Enter your salary: ");
scanf("%f", &salary);
printf("The salary is %f \n", salary);

printf("Enter your budget: ");
scanf("%1f", &budget);
printf("The budget is %1f \n", budget);

return 0;
}
