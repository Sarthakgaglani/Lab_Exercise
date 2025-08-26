#include<stdio.h>
int main()
{
	int i,n,count=1,rem;
	printf("Enter the number ");
	scanf("%d",&n);
	if(i==0)
	{
		printf("",count);
	}
	while(i!=0)
	{
		n = n /10;
		rev=rev*10+rem;
		rem = n%10;
		
		
		++count;
		i++;
	
		
	}
		printf("",count);
	
}
