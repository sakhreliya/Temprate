#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	printf("enter value N :");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
		printf("factorial of %d",fact);
}
