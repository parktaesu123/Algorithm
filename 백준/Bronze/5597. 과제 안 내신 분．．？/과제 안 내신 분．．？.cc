#include <stdio.h>

int main()
{
	int n;
	int arr[100] = {0,};
	int test = 0;
	int temp = 0;
	
	for(int i = 0; i<28; i++) {
		scanf("%d", &n);
		
		arr[i] = n;
	}
	
	for (int i = 0; i < 28; i++) {
		for (int j = 0; j < 28; j++) {
			if (arr[i] < arr[j]) {  
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 1; i<=30; i++) {
		test = 0;
		for(int j = 0; j<28; j++) {
			if(arr[j] == i) {
				test = 1;
				break;
			}
		}
		if(!test) {
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}