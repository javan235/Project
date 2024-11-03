#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50
#define FILENAME "students.dat"

//Define the Student structure 
struct Student{
	char name[NAME_LENGTH];
	int marks;
};

//Function to write students to file
void writeStudentsToFile(struct Student students[], int n){
	FILE *file = fopen(FILENAME,"ab");
	if(file == NULL){
		perror("Error opening file for writing");
		exit(EXIT_FAILURE);
	}
	fwrite(students,sizeof(struct Student), n,file);
	fclose(file);
}

//Function to read students from file
void readStudentsFromFile(){
	FILE * file= fopen(FILENAME,"rb");
	if(file == NULL){
		perror("Error opening file for reading");
		exit(EXIT_FAILURE);
	}
	
	struct Student student;
	printf("Student Rercords:\n");
	while(fread(&student,sizeof(struct Student), 1, file)){
		printf("Name:%s,Marks:%d\n",student.name,student.marks);
	}
	fclose(file);
}
//Main function to execute the program
int main(){
	int n;
	struct Student students[MAX_STUDENTS];
	
	//Ask the user for the number of students
	printf("Enter the number of students(max %d):",MAX_STUDENTS);
	scanf("%d",&n);
	if(n<1||n>MAX_STUDENTS){
		printf("Invalid number of students.\n");
		return 1;
	}
	
	//Read student data from the user
	for(int i =0;i<n;i++){
		printf("Enter name of student %d:",i+1);
		scanf("%s",students[i].name);
		printf("Enter marks of student %d:",i+1);
		scanf("%d",&students[i].marks);
	}
	//Write student data to file
	writeStudentsToFile(students,n);
	printf("Student information saved successfully.\n");
	
	//Read and display all students records from file 
	printf("Reading from file:\n");
	readStudentsFromFile();
	
	return 0;
}