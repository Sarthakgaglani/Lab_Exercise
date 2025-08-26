//fibonacci series
#include<stdio.h>
int main()
{
	int i,a=0,b=1,num,ans;
	printf("Enter the number of series: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		ans=a+b;
		printf("%d \n",a);
		a=b;
		b=ans;
		
	}
	
}
