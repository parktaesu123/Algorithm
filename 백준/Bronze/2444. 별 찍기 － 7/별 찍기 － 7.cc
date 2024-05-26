#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++)
	{
		for(int j = n-1; j>i; j--)
		{
			printf(" ");
		}
		for(int k = 0; k<i+1; k++)
		{
			printf("*");
		}
		for(int s = 0; s<i; s++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i = 0; i<n-1; i++)
	{
		for(int j = 0; j<i+1; j++)
		{
			printf(" ");
		}
		for(int k = n-1; k>i; k--)
		{
			printf("*");
		}
		for(int s = n-2; s>i; s--)
		{
			printf("*");
		}
			printf("\n");
	}
	
	return 0;
}