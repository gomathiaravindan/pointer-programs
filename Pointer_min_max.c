#include<stdio.h>
int main()
{
	int n,a[100],i,*max;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max = &a[0];
	*max = a[0];

	for(i=1;i<n;i++)
	{
	
		if(a[i] > *max)
		{
			*max = a[i];
		}
	
	}
//	printf("The minimum element is:%d",*min);
	printf("\nThe maximum element is:%d",*max);
}
