#include<stdio.h>
int main()
{
	int n,*ptr,*p;
	printf("Enter a number:");
	scanf("%d",&n);
	ptr = &n;
	p = ptr;
	printf("%d %d %d",*p,*ptr,n);
}
