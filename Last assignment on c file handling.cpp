#include<stdio.h>
#include<stdlib.h>

#define MAX_PARAGRAPH_LENGTH 200

//Function to write the paragraph to the file
void writeParagraphToFile(){
	FILE * file=fopen("output.txt","w");//Open file for writing (create new one if doesn't exist
	if(file == NULL){
		perror("Error opening file for writing");
	}
	
	char paragraph [MAX_PARAGRAPH_LENGTH];
	printf("Enter a paragraph (up to 200 characters): \n");
	fgets(paragraph,MAX_PARAGRAPH_LENGTH,stdin); //Read paragraph input from user
	
	//Write paragraph to the file
	fputs(paragraph,file);
	
	printf("Paragraph succesfully written to 'output.txt'.\n");
	
	fclose(file); //Close the file
} 

//Function to read content from the file and display it on the screen
void readFromFile(){
	FILE * file = fopen("output.txt","r"); //Open file for reading
	if (file == NULL){
		perror("Error opening file for reading");
		exit(1);
	}
	
	char ch;
	printf("\nContent of 'output.txt':\n");
	//Read and display each character from the file
	while((ch = fgetc(file))!=EOF){
		putchar(ch);
	}
	
	fclose(file); //Close file
}

//Function to append an additional paragraph to the file without deleting original content
void appendParagraphToFile(){
	FILE * file = fopen("output.txt","a"); //Open file for appending
	if(file == NULL){
		perror("Error opening file for appending");
		exit(1);
	}
	
	char paragraph[MAX_PARAGRAPH_LENGTH];
	printf("\nEnter a new paragraph to append (up to 200 characters):\n");
	fgets(paragraph,MAX_PARAGRAPH_LENGTH,stdin); //Read new paragraph
	
	//Append the paragraph to the file 
	fputs(paragraph,file);
	
	printf("New paragraph successfully appended to 'output.txt'.\n");
	
	fclose(file); //Close the file
}

int main(){
	int choice;
	
	while(1){
		//Display menu for user interaction 
		printf("\nFile Operations Menu :\n");
		printf("1.Write a paragraph to 'output.txt'\n");
		printf("2.Read nd display content from'output.txt'\n");
		printf("3.Append a new paragraph to'output.txt'\n");
		printf("4/Exit\n");
		printf("Enter your choice(1-4):");
		
		scanf("%d",&choice);
		getchar();//Clear the newline character left by scanf
		
		switch(choice){
			case1:
				writeParagraphToFile();
				break;
			case2:
				readFromFile();
				break;
			case3:
			appendParagraphToFile();
			break;
		case4:
		printf("Exit program.\n");
		exit(0);
		default:
			printf("Invalid choice!please select a validoption.\n");
			
		}
		
	}	
		
		return 0;
		}	