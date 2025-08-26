#include<stdio.h>
int main()
{
		int num,i,j;
		char name[10]="BHARAT"; 
		
		for(i=0;i<6;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%c ",name[j]);
			}
			printf("\n");
		}
}
