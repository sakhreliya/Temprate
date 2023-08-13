#include<stdio.h>
main()
{
    int n, first, last,sum;
    printf("Enter a number: ");
    scanf("%d", &n);

	last = n%10;
    while (n>=10)
	{
        n=n/=10;
    }
    first = n;
	
    sum = first+ last;
    printf("Sum of : %d\n", sum);
}

