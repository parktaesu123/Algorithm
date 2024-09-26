function solution(myString, pat) {
    let answer = [];
    let A = 'A';
    let B = 'B';
    for(let i = 0; i<myString.length; i++) {
        if(myString[i] == 'A') {
            answer += B;
        }
        else if(myString[i] == 'B') {
            answer += A;
        }
    }
    if(answer.includes(pat))
        return 1;
    else 
        return 0;
}