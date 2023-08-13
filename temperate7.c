#include<stdio.h>
main()
{
    int n,first=0,second=1,next;

    printf("Enter the number: ");
    scanf("%d", &n);

    int i=0;
    while (i<n) 
	{
        if (i<=1)
		{
            next=i;
        } 
		else 
		{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d ",next);
        i++;
    }
}

