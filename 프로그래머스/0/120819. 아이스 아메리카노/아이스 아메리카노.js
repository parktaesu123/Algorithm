function solution(money) {
    let answer = [];
    let sum = 0;
    while(money >= 5500) {
        money -= 5500;
        sum++;
    }
    answer.push(sum, money);
    
    return answer;
}