#include<stdio.h>
int main()
{
	int n,i,*p,a[100];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p = &a[n-1];
	printf("Reversing the array using pointer!!\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p-i));
	}
}
