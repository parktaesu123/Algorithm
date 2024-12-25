#include <stdio.h>

int main() 
{
	int N, M;
    int i, j;
    int k;
	int arr[101] = {0,};
	int temp = 0;
	
	scanf("%d %d", &N, &M);
	
	for(k = 1; k<=N; k++) {
		arr[k] = k;
	}
	
	for(k = 0; k < M; k++) {
		scanf("%d %d",&i, &j);
		
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp; 
	}
	
	for(k = 1; k<=N; k++) {
		printf("%d ",arr[k]);
	}
}