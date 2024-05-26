#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	
	for(int i = 0; i<N; i++)
	{
		for(int j = 0; j<i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int i = 1; i<N; i++)
	{
		for(int k = N; k>i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}