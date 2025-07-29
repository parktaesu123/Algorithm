function solution(number) {
    var answer = 0;
    for(const digit of number) {
        answer += Number(digit);
    }
    
    answer %= 9;
    return answer;
}