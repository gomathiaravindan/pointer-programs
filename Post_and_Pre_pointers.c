#include<stdio.h>
int main()
{
	int n,a[100],i,*p,*p1;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p = &a[0];
	p1 = &a[n-1];
	printf("The pre increament of *(p++) is:%d\n", *(++p));
	printf("The post increament of *(p++) is:%d\n",*(p++));
	printf("The pre decreament of *(--p1) is:%d\n",*(--p1));
	printf("The post decreament of *(p1--) is:%d\n",*(p1--));
}
