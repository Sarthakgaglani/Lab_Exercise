/*
5
4	4	
3	3	3
2	2	2	2
1	1	1	1	1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter no. rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=(n-i+1);j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}
