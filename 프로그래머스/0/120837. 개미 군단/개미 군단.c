#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    answer = hp/5 + hp%5/3 + hp%5%3/1;
    return answer;
}