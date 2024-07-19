#include <stdio.h>
#include <string.h>

int main()
{
	char arr[999] = {0,};
	int N;
	scanf("%d",&N);
	
	for(int i =0; i<N; i++) {
		scanf("%s",arr);
		printf("%c",arr[0]);
		printf("%c\n",arr[strlen(arr)-1]);
	}
	
	return 0;
}