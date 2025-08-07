function solution(myString) {
    var answer = [];
    let arr = '';
    
    for(let i = 0; i<myString.length; i++) {
        
        if(myString[i] != 'x') {
            arr += myString[i];
        } else {
            if(arr != '') answer.push(arr);
            arr = '';
        }
    }
    if(arr != '') {
        answer.push(arr)
    }
    
    return answer.sort();
}