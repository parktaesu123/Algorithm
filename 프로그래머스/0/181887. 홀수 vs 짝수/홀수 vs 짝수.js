function solution(num_list) {
    var answer = 0;
    let A = 0;
    let B = 0;
    for(let i = 0; i<num_list.length; i+=2) 
        A += num_list[i];
    
    for(let i = 1; i<num_list.length; i+=2)
        B += num_list[i];
    
    if(A > B)
        return A;
    else
        return B;
}