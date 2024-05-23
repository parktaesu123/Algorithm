#include <stdio.h>

int main()
{
	int Num[100];
	int Max = 0;
	int order; 
	
	for(int i = 0; i<9; i++)
	{
		scanf("%d",&Num[i]);
	}
	
	for(int j = 0; j<9; j++)
	{
		if(Max < Num[j])
		{
			Max = Num[j];
			order = j+1;
		}
	}
	
	printf("%d\n",Max);
	printf("%d",order);
	 
	return 0;
}
