function solution(num_list) {
    var answer = 0;
    let sum = 0;
    let mul = 1;
    for(let i = 0; i<num_list.length; i++) {
        sum += num_list[i];
        mul *= num_list[i];
    }
    if((sum * sum) > mul) {
        return 1;
    }
    else {
        return 0;
    }
}