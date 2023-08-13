#include<stdio.h>
main() 
{
    int n, count;
    printf("Enter an integer: ");
    scanf("%d", &n);

	while(n>0)
	{
		(n=n/10);
		count++;
	}
   		printf("%d\n",count);
}

 
