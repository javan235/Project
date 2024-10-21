// c functions
#include <stdio.h>// scanf(),printf()
#include<math.h> //sin(), cos(),tan(), sqrt()
int area(int l, int w); // function propotype
int perimeter(int length, int width); //function propotype
int Area(int pie, int radius); //function propotype
int main(){
	int a,c,A,len,wid,pie,radi;
	printf("Enter legnth,width,pie and radius: ");
	scanf("%d%d%d%d",&len, &wid, &pie, &radi);
	a = area(len,wid); //function calling
	c = perimeter(len,wid); //function calling
	A = Area(pie,radi); //function calling
	printf("Area of a rectangle is %d \n", a);
	printf("Perimeter of a rectangle is %d \n", c);
	printf("Area of a circle is %d \n", A);
	
	return 0;
}
//function definition
int area(int l, int w){
	int a;
	a = l*w;
	return a;
}
int perimeter(int length, int width){
	int c;
	c = 2  * (length+width);
	return c;
}
int Area(int pie, int radius){
	int A;
	A = 3.14 * (radius * radius);
	return A;
}