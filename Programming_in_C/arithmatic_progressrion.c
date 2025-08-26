//AP example
#include<stdio.h>
int main()
{
	int a,n,d,ans;
	printf("Enter the intial value of sequence: ");
	scanf("%d",&a);
	printf("Enter the position of number to find in sequence: ");
	scanf("%d",&n);
	printf("Enter the difference of numbers in sequence: ");
	scanf("%d",&d);
	ans = a+(n-1)*d;
	printf("Number in sequence is %d",ans);
	
}
