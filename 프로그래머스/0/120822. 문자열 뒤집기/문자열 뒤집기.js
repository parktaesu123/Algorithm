function solution(my_string) {
    var answer = '';
    for(let i = 1; i<=my_string.length; i++) {
        answer += my_string[my_string.length - i];
    }
    return answer;
}