#include <stdio.h>

int main()
{
	int A,B;
	
	while(1)
	
	{
		scanf("%d %d",&A,&B);
		
		if(A+B != 0)
		{
			printf("%d\n",A+B);
			continue;
		}
		else
		{
			break;
		}
	}
		
	return 0;
}