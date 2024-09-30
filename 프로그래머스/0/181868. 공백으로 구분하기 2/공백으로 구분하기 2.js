function solution(my_string) {
    var answer = [];
    let temp = '';
    for(let i = 0; i<my_string.length; i++) {
        if(my_string[i] !== " ")
            temp += my_string[i];
        else {
            if(temp.length > 0) {
                answer.push(temp);
                temp = '';
            }
        }    
    }
    
    if (temp.length > 0) {
        answer.push(temp);
    }
    
    return answer;
}