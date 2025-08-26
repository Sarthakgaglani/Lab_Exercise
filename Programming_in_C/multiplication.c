//multiplication of numbers
#include<stdio.h>
int main()
{
	int i,num,ans;
	printf("Enter the number \n");
	scanf("%d",&num);
	for(i=1;i<=15;i++){
		ans=num*i;
		printf("%d * %d = %d\n",num,i,ans);
	}
	
}
