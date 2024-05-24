#include <stdio.h>

int main()
{
	int N,V,cnt=0;
	
	scanf("%d",&N);
	
	int arr[100];
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&V);
	
	for(int i = 0; i<N; i++)
	{
		if(V == arr[i])
		{
			cnt++;
		}
		
	}
	
	printf("%d",cnt);
	
	return 0;
}