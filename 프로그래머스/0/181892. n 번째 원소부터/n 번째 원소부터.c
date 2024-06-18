#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    size_t answer_len = num_list_len - n + 1; // 반환할 배열의 길이
    int* answer = (int*)malloc(answer_len * sizeof(int)); // 동적 메모리 할당

    for (int i = 0; i < answer_len; i++) {
        answer[i] = num_list[n - 1 + i]; // n번째 원소부터 마지막 원소까지 복사
    }

    return answer;
}