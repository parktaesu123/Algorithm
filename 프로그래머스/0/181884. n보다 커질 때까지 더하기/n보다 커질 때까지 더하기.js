function solution(numbers, n) {
    let i, answer = 0;
     
    for(i = 0; i < numbers.length; i++) {
        if(answer <= n) {
            answer += numbers[i];
        }
    }
    return answer;
}