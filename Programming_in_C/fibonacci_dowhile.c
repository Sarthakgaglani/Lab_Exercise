#include<stdio.h>
int main()
{
	int i,a=0,b=1,s,n;
	printf("Enter the number ");
	scanf("%d",&n);
	do{
		printf("%d \n ",a);
		s=a+b;
		
		a=b;
		b=s;
		i++;
	}while(i<n);
}
