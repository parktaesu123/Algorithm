function solution(my_string, target) {
    var answer = 0;
    for(let i = 0; i<my_string.length; i++) {
        if(my_string.includes(target))
            return 1;
    }
    return answer;
}