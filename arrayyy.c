#include<stdio.h>
main()
{
	int a[3][3];
	int i,j;
	int *b;
	b=&a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for a[%d][%d] :",i,j);
			scanf("%d",(b + i) + j);
		}
	}
	
	printf("Array elememts:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(*(b+i)+j));

		}
		printf("\n");
	}

	return 0;
}
