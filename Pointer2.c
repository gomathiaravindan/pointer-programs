#include<stdio.h>
int main()
{
	float n,*ptr;
	printf("Enter a number:");
	scanf("%f",&n);
	printf("The value of n before reassignment: %f\n",n);
	ptr = &n;
	*ptr = 90.8;
	printf("%u %f %f",ptr,*ptr,n);
	printf("\nThe value of n is changed!!");
}
