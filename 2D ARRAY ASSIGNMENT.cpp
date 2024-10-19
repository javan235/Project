//c array> 2D Array
#include<stdio.h> //scanf(),printf()
int main (){
	int a,b;
	float ages[3][2] = {
	{46,34},
	{24,43},
	{23,19}
	};
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("ages[%f][%f] = %f \n",a,b, ages[a][b]);
		}
		
	}
	return 0;
}