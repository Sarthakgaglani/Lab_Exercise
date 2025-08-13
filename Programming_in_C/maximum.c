//maximum of 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value a ");
	scanf("%d",&a);
	printf("Enter value b ");
	scanf("%d",&b);
	printf("Enter value c ");
	scanf("%d",&c);
//	if(a>b && a>c)
//	printf("a is maximum");
//	if(b>c && b>a)
//	printf("b is maximum");
//	if(c>a && c>b)
//	printf("c is maximum");
	if(a>b && a>c)
	printf("a is maximum");
	else if(b>c && b>a)
	printf("b is maximum");
	else
	printf("c is maximum");
	
}
