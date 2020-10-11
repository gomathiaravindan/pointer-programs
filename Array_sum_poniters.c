#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i,a,sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	p = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p + i);
		sum=sum+ *(p+i);
	}
	printf("%d",sum);
}
