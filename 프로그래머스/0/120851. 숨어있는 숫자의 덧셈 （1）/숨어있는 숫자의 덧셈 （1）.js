function solution(my_string) {
    let answer = 0;
    const num = my_string.split("");
    
    for(let i = 0; i < my_string.length; i++) {
        if(Number(num[i]))
            answer += Number(num[i]);
    }
    return answer;
}