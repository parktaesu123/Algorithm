function solution(numLog) {
    var answer = "";
    for(let i = 0; i<numLog.length; i++) {
        if(numLog[i-1] - 1 == numLog[i])
            answer += 's';
        else if(numLog[i-1] + 1 == numLog[i])
            answer += 'w';
        else if(numLog[i-1] - 10 == numLog[i])
            answer += 'a';
        else if(numLog[i-1] + 10 == numLog[i])
            answer += 'd';
    }
    return answer;
}