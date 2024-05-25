#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		for(int j = n; j>i; j--){  //점점한칸씩 내려갈떄마다 별의 갯수가 줄어들도록
			printf("*");	
		}
			printf("\n");
	}
	return 0;
}