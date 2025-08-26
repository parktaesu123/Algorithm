function solution(intStrs, k, s, l) {
    var answer = [];
    for(let i = 0; i<intStrs.length; i++) {
        
        var a = intStrs[i].slice(s, s+l)
        let num = Number(a)
        
        if(num > k) {
            answer.push(num)
        }
    }
    return answer;
}