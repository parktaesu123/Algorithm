#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++) 
	{
		for(int j = 0; j<i+1; j++)
		{
			printf("*");
		}
		for(int k = n-1; k>i; k--)
		{
			printf(" ");
		}
		for(int s = n-1; s>i ; s--)
		{
			printf(" ");
		}
		for(int a = 0; a<i+1; a++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	for(int i = 0; i<n; i++) 
	{
		for(int k = n-1; k>i; k--)
		{
			printf("*");
		}
		
		for(int j = 0; j<i+1; j++)
		{
			printf(" ");
		}
		for(int a = 0; a<i+1; a++)
		{
			printf(" ");
		}
		for(int s = n-1; s>i ; s--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}