#include<stdio.h>

fact(int num)
{
	int f=1;
	if(num<=0)
	{
		return 1;

	}
	else
	{
		f = num * fact(num-1);
	}
  	return f;
}

main()

{
	int n;
	printf("Enter Value = ");
	scanf("%d",&n);
	printf("Factorial = %d",fact(n));
}
