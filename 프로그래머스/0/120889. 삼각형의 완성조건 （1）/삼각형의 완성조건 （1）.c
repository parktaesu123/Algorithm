#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int sum = 0;
    int max = 0;
    for(int i=0;i<3;i++)
    {
        if(max < sides[i]) max = sides[i];
        sum += sides[i];
    }
    sum -= max;
    if(max >= sum) return 2;
    return 1;
}