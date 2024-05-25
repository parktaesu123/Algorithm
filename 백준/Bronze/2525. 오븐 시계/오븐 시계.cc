#include <stdio.h>

int main()
{
	int hour,min,time;
	
	scanf("%d %d %d",&hour,&min,&time);
	
	min += time;
	
	if(min >= 60)
	{
		while(min >= 60)
		{
			min -= 60;
			hour += 1;
		}		
	}
	
	if(hour >= 24)
	{
		hour -= 24;
	}
	
	printf("%d %d",hour,min);
	
	return 0;
}