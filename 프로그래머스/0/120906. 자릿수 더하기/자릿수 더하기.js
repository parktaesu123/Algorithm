function solution(n) {
    let answer = 0;
    let char = String(n);
    for(let i = 0; i<char.length; i++) {
        answer += Number(char[i]);
    }
    return answer;
}