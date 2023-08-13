#include<stdio.h>
main()
{
	int n,temp,a,b=0;
	printf("enter a value :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("reverse no=%d",b);
	
}
