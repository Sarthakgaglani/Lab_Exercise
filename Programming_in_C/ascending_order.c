// increasing or ascending order pattern in right angle triangle
/*
r=1 1
r=2 2	2
r=3 3	3	3
r=4 4	4	4	4
r=5 5	5	5	5	5
*/
#include<stdio.h>
int main()
{
	int i,j,n,count=1;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	for(i=n;i>=n;i--)
	{
		for(j=1;j<=n;j++){
			printf("%d ",&i);//any digit
			 
			 
		}
		printf("\n");
	}
}
