function solution(arr) {
    var answer = [];
    for(let i = 0; i < arr.length; i++) {
        let A = Number(arr[i]);
        for(let j = 0; j < A; j++) {
            answer.push(A);
        }
    }
    return answer;
}
