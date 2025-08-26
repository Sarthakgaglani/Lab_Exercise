#include<stdio.h>
int main()
{
	int i,a=0,b=1,s,n;
	printf("Enter the number for fibonacci series ");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d \n",a);
		s=a+b;
		a=b;
		b=s;
		i++;
		// s=0+1 = 1
		// print = 0
		//a=b=1
		//b=s=1    s= 1+1=2 p=1  a=b=1 b=s=2
		//s=1+2    p=1  a=b=2   b=s=3
		//s=2+3   p=2  a=b=3   b=s=5
	}
}
