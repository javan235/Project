#include<stdio.h>
#include<string.h>include 

//Define the structure for Employee
struct Employee{
	char name[25]; //Name field with 25 characters
	int ID; //ID field as an integer
	char department[20]; //Department field with 20 characters
	float salary ; //Salary field as a float
	char email [50]; //Email field with 50 characters 
};
int main (){
	//Declare a variable of type struct Employee and initialize it 
	struct Employee emp ={
		"John Doe", //Name
		12345, // ID
		"Human resource", //Department 
		5500.50, // Salary 
		"johndoe@company.com"//Email
	};
	
	//Print the values of the Employees structure
	
	printf("Employee Information:\n");
	printf("Name:%s\n",emp.name);
	printf("ID:%d\n",emp.ID);
	printf("Department:%s\n",emp.department);
	printf("Salary:%f\n",emp.salary);
	printf("Email:%s\n",emp.email);
	
	return 0;
}
		
	
	