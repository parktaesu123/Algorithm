#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int a = 0;
    int answer = 0;
    for(int i = 1; i<=n; i++) {
        if(i*i == n)
            a = 1;
    }
        if(a)
            answer = 1;
        else
            answer = 2;
    return answer;
}