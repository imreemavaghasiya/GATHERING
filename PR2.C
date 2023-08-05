#include<stdio.h>

sum(int p[],int n)
{
	int i,add=0;
	for(i=0;i<n;i++)
	{
		add = add + p[i];

	}
	printf("Sum of Array = %d\n",add);
}

main()

{
	int a[100],n;
	printf("Enter Array = ");
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	sum(a,n);
}
