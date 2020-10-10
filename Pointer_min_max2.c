#include<stdio.h>
int main()
{
	int n,a[100],i,*min;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min = &a[0];
	*min = a[0];

	for(i=1;i<n;i++)
	{
	
		if(a[i] < *min)
		{
			*min = a[i];
		}
	
	}
	printf("The minimum element is:%d",*min);
//	printf("\nThe maximum element is:%d",*max);
}
