function solution(a, b) {
    let answer = 0;
    let A = String(a) + String(b);
    let B = String(b) + String(a);
    
    if(A > B) 
        return Number(A);
        
    else if(B > A)
        return Number(B);
    
    else
        return Number(A);
    
    return answer;
}