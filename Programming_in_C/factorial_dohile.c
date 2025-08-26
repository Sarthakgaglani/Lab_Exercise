#include<stdio.h>
int main()
{
	int i=1,a,n;
	printf("Enter a number for factorial ");
	scanf("%d",&n);
	do{
		a=a*i;
		i++;
	}
	while(i<=n);
	printf("Factorial of number is %d",a);
}
