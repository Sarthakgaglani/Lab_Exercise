#include<stdio.h>
int main()
{
	int i=1,n,ans;
	printf("Enter the number ");
	scanf("%d",&n);
	do{
		ans = n*i;
		printf("%d * %d = %d\n",n,i,ans);
		i++;
	}
	while(i<=10);
}
