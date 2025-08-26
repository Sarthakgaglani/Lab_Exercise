// count of digits, sum of digits, reverse of digits
#include<stdio.h>
int main()
{
	int count=0,num,rem,rev;
	printf("Enter the number ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev=rem;
		
		printf("Reverse of number is %d",rem);
		count++;
		num=num/10;
		//printf("%d",rem);
		
	}
	printf("\n\n\nNo. of digits is %d",count);
	
}
