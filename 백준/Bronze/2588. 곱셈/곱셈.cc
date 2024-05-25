#include <stdio.h>

int main()
{
	int num1;
	int a,b,c; 
	
	scanf("%d",&num1);
	scanf("%1d%1d%1d",&a,&b,&c);
	
	printf("%d\n",num1*c);
	printf("%d\n",num1*b);
	printf("%d\n",num1*a);
	printf("%d\n",num1*(100*a+10*b+c));
	
	return 0;
} 