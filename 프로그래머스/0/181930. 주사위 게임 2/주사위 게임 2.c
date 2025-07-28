
#include <math.h>
int solution(int a, int b, int c) {
    int answer = 1;
    for(int i = (a == b || a == c) + (b == c) + 1; i; i--)
        answer *= (pow(a, i) + pow(b, i) + pow(c, i));
    return answer;
}