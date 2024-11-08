#include<stdio.h>
#include<string.h>

//Define the Employee structure
struct Employee{
	int employee_id;
	char name[50];
	float salary;
};

int main(){
	//Declare an array of 3 Employee structures
	struct Employee employees[3];
	int i;
	struct Employee highest_salary_employee;
	
	//Input details for 3 employees
	for(i=0;i<3;i++){
		printf("Enter details for employee %d:\n",i+1);
		printf("Employee ID: ");
		scanf("%d",&employees[i].employee_id);
		getchar();//To clear new line character left by scanf
		printf("Name:");
		fgets(employees[i].name,sizeof(employees[i].name),stdin);
		employees[i].name[strcspn(employees[i].name,"\n")]='\0';
		printf("Salary:");
		scanf("%f",&employees[i].salary);
	}
	
	//Initialize the highest salary employee as the first employee
	highest_salary_employee =employees[0];
	
	//Find the employee with highest salary
	for(i=1;i<3;i++);{
		if(employees[i].salary> highest_salary_employee.salary){
			highest_salary_employee=employees[i];
		}
	}
	
	//Output the details of the employee with the highest salary
	printf("\nEmployee with the highest salary:\n");
	printf("Employee ID:%d\n",highest_salary_employee.employee_id);
	printf("Name:%s\n",highest_salary_employee.name);
	printf("Salary:%2f\n",highest_salary_employee.salary);
	
	return 0;
}
	