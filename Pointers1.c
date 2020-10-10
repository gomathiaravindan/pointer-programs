#include<stdio.h>
int main()
{
	int a,*p;
	printf("Give a value:");
	scanf("%d",&a);
	p = &a;
	printf("%u %d %d",&a,*p,a);
}
