function solution(num_list) {
    var answer = [];
    num_list.sort(function(a, b) {
        return a - b;
    });
    for(let i = 0; i<num_list.length; i++) {
        if(i > 4) {
            answer.push(num_list[i]);
        }
    }
    return answer;
}