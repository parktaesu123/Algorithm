function solution(x) {
    var answer = true;
    let sum = 0;
    
    for(let i = 0; i<x.toString().length; i++) {
        sum += Number(x.toString()[i])
    }
    
        return x % sum === 0;
}