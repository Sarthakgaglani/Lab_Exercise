#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value a = ");
	scanf("%d",&a);
	printf("Enter value b = ");
	scanf("%d",&b);
	
	//arthmatic operaters
	printf("\n sum = %d",a+b);
	printf("\n sub = %d",a-b);
	printf("\n mul = %d",a*b);
	printf("\n div = %d",a/b);
	printf("\n mod = %d",a%b);
	
	//relational operators
	printf("\n a>b = %d",a>b);
	printf("\n a<b = %d",a<b);
	printf("\n a>=b = %d",a>=b);
	printf("\n a<=b = %d",a<=b);
	printf("\n a!=b = %d",a!=b);
	
	//logical operators
	printf("\n a>b && b>100=%d",a>b && b>100);
	printf("\n a>b || b>100=%d",a>b || b>100);
	printf("\n !(a>b && b>100)=%d",!(a>b && b>100));
	
	//assessement operators
	printf("\n a+=100=%d",a+=100);
	printf("\n a-=100=%d",a-=100);
	printf("\n a*=10=%d",a*=10);
	printf("\n a/=5=%d",a/=5);
}
