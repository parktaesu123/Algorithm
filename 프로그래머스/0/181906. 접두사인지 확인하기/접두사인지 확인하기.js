function solution(my_string, is_prefix) {
    
    if(my_string.length < is_prefix.length){
        return 0;
    }
    
    for(let i = 0; i<is_prefix.length; i++) {
        if(my_string[i] !== is_prefix[i])
            return 0;
    }
    
    return 1;
}