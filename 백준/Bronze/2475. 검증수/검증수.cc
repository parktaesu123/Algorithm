#include <stdio.h>

int main()
{
int a;
int num = 0;
for(int i=1; i<=5; i++)
{
	scanf("%d", &a);
	num += a*a;
}
	printf("%d", num%10);
	return 0;
}