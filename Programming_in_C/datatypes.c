#include<stdio.h>
int main()
{
	int a=49;
	float b=40.569;
	char ch='f';
	double c=57.3699741;
	
	printf("\n int a =  %d",a);
	printf("\n float b = %f  ",b);
	printf("\n char ch = %c",ch);
	printf("\n double c = %lf",c);
	
	printf("\n char ch = %d",ch); // asscai value
	printf("\n float b = %d  ",b);
	printf("\n float b = %c  ",b);
	printf("\n int a =  %f",a);
	printf("\n int a =  %c",a);
}
