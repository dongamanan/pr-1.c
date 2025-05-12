#include<stdio.h>
int main()
{
	int a,n;
	a=1;
	
	printf("enter of n:");
	scanf("%d",&n);
	
	while(a<=n)
	{
		printf(" %d",a);
		a+=2;
	}
}