// sample text
#include<stdio.h>//fprint(),printf(),scanf(),fclose
#include<stdlib.h> //exit()
int main(){
	int number; //deceleration
	FILE *fptr;
	fptr = fopen("C:\\Users\\Javan\\Desktop\\c programs\\sample.txt","w");
	
	if (fptr == NULL) {
		printf("Eroor opening the file");
		exit(1);
	}
		
		printf("Enter a number: ");
		scanf("%d", &number);
		
		fprintf(fptr, "%d",number);
		fclose(fptr);
		
		return 0;
}
		
		
		