function solution(num_list) {
    var answer = num_list.length > 10 ? 0 : 1;
    if(num_list.length > 10) {
        for(let i = 0; i<num_list.length; i++)
            answer += num_list[i];
    }
    else {
        for(let j = 0; j<num_list.length; j++)
            answer *= num_list[j];
    }
    return answer;
}