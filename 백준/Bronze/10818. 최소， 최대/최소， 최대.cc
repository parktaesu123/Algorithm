#include <stdio.h>

int main()
{
	int arr[1000000];
	int N,Max=-1000000,Min=1000000;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int j = 0; j < N; j++)
	{
		if(Max < arr[j])
		{
			Max = arr[j];
		}
		if(Min > arr[j])
		{
			Min = arr[j];
		}		
	}
	
	printf("%d %d", Min, Max);
	
	return 0;
}