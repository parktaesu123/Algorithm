function solution(num_list, n) {
    let i, answer = [];
    
    for(i = 0; i<num_list.length; i+=n) {
        answer.push(num_list[i]);
    }
    return answer;
}