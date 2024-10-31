#include<stdio.h>
#include<stdlib.h>
#define FILENAME"data.txt"
#define MAX_LENGTH 100

void writeSentence(){
	FILE*file = fopen(FILENAME,"w");
	if(file == NULL){
		perror("Error opening file for writing");
		return ;
	}
	
	char sentence [MAX_LENGTH];
	printf("Enter a sentence (up to 100 characters): ");
	fgets(sentence,sizeof(sentence),stdin);
	if(fputs(sentence,file)== EOF){
		perror("Error opening file for reading");
	}
	fclose(file);
}

void readSentences(){
	FILE*file = fopen(FILENAME,"r");
	if(file == NULL){
		perror("Error opening file for reading");
		return;
	}
	char sentence [MAX_LENGTH];
	printf("Contents of '%s':\n", FILENAME);
	while(fgets(sentence,sizeof(sentence),file)!=NULL){
		printf("%s",sentence);
	}
	
	fclose(file);
}

void appendSentence(){
	FILE *file = fopen(FILENAME, "a");
	if (file == NULL){
		perror("Error opening file for appending");
		return;
	}
	
	char sentence[MAX_LENGTH];
	printf("Enter a second sentence (up to 100 characters): ");
	fgets(sentence, sizeof(sentence), stdin);
	
	if (fputs(sentence,file) ==EOF){
		perror("Error appending to file");
	}
	
	fclose(file);
}

int main(){
	int choice;
	
	do{
		printf("\nFile Operations Menu:\n");
		printf("1. Write a sentence to the file \n");
		printf("2.Read sentences from the file \n");
		printf("3.Append a second sentence to the file \n");
		printf("4.Exit \n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		getchar(); //To consume the newline character left by scanf
		
		switch(choice){
			case 1:
			writeSentence();
			break;
		case 2:
			readSentences();
			break;
		case 3:
			appendSentence();
			break;
		case 4:
			printf("Existing program.\n");
			break;
		default:
			printf("Invalid choice. Please try  again. \n");
		}
	}while(choice !=4);
	
	return 0;
}
		
	

	
		