#include<stdio.h>
main() 
{
    int n,Prime=1,i=2;

    printf("Enter a number: ");
    scanf("%d",&n);
   
    while (i<=n/2) 
	{
        if (n%i==0) 
		{
            Prime=0;
            break;
        }
        i++;
    }

    if(Prime) 
	{
        printf("%d is a prime number.\n",n);
    } 
	else 
	{
        printf("%d is not a prime number.\n",n);
    }

}

