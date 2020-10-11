#include<stdio.h>
int main()
{
	int *p,i,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	p = a;
	for(p=a;p<=a+n-1;p++)
	{
		scanf("%d",p);
	}
	printf("The reversed array is:\n");
	for(p=a+n-1;p>=a;p--)
	{
		printf("%d\n",*p);
	}
}
