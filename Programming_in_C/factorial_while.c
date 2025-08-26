#include<stdio.h>
int main()
{
	int i=1,n,a;
	printf("Enter the number for factorial ");
	scanf("%d",&n);
	while(i<=n){
		a=a*i;
		i++;
	}
	printf("Factorial of %d is %d",n,a);
}
