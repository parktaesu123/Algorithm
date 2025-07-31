function solution(n) {
    var answer = [];
    
    for(let i = 0; i<n; i++) {
        
        const group = [];
        
        for(let j = 0; j<n; j++) {
            if(j == i) {
                group.push(1)
            } else {
                group.push(0)
            }
        }
        
        answer.push(group);
    }
    return answer;
}