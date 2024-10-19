//c arrays: 1D Array
#include<stdio.h> //scanf(),printf()
int main(){
	int r;
	int ages[8] = {3,5,6,7,7,8,8,6};
	for (r=0; r<=7; r++){
		printf("%d \n", ages[r]);
	}
	return 0;
}