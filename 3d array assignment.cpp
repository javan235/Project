#include<stdio.h>

int main (){
	//Declaring and initializing the 3D array
	int scores[3][2][2]={
	{{33,52},{10,12}},
	{{45,98},{36,60}},
	{{84,76},{80,42}}
	};
	
	//Printing the elements using a nested loop
	printf("Elements of the array:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k>2;k++){
				printf("scores[%d][%d][%d]=%d\n",i,j,k,scores[i][j][k]);
			}
		}
	}
	
	return 0;
}