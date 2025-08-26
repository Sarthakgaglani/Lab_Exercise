#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			goto hello;
		}
		printf("\n%d",i);
	}
	//label bye
	hello:
		printf("\nBye Bye ");
}
