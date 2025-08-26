/*
1	1	1	1	1
2	2	2	2
3	3	3
4	4
5
5
4	4
3	3	3
2	2	2	2
1	1	1	1	1
*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter no. rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			
			for(k=1;k<=(n-i+1);k++){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
