#include<stdio.h>

int main(){
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
	// Input from user
	printf("Enter Book ID:");
	scanf("%d",&bookID);
	printf("Enter Due Date:");
	scanf("%d",&dueDate);
	printf("Enter Return Date:");
	scanf("%d",&returnDate);
	
	// Calculate days overdue
	daysOverdue = returnDate - dueDate;
	if (daysOverdue <= 7) {
		fineRate = 20;
	} else if (daysOverdue <=14) {
		fineRate = 50;
	} else if (daysOverdue >=15) {
		fineRate = 100;
	}
	
	// Calculate fine Amount 
	fineAmount = daysOverdue * fineRate;
	
	// Display results
	printf("Book ID: %d\n", bookID);
	printf("Due Date: %d\n", dueDate);
	printf("Return Date: %d\n", returnDate);
	printf("Days Overdue: %d\n", daysOverdue);
	printf("Fine Rate: %d\n", fineRate);
	printf("Fine Amount: %d\n", fineAmount);
	
	return 0;
}