#include<stdio.h>
int main()
{
	int n,a[100],*p,i;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p = &a[0];
	printf("Traversing the array using pointer!!\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}
