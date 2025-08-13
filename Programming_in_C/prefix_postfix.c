#include<stdio.h>
int main()
{ 
	// ++
	int a=10;
	int b,c;
	b=a++;  //assign value of a to b then increment
	printf("value of a is %d and b is %d",a,b);
	int x=10;  // increment value of x then assign to c
	c=++x;
	printf("\n value of x is %d and c is %d",x,c);
	
	// --
	int p=10,q=10,r,s;
	r=p--;
	printf("\n value of p is %d and r is %d",p,r); //assign to r then decrement and assign to p
	s=--q;
	printf("\n value of q is %d and value of s is %d", q,s); // decrement then assign to s and q
}

