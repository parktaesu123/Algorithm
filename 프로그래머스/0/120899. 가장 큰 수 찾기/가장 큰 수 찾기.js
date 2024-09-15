function solution(array) {
    let answer = [];
    let Max = 0;
    let tmp = 0;
    for(let i = 0; i<array.length; i++) {
        if(array[i] > Max) {
            Max = array[i];
            tmp = i;
        }
    }
    answer.push(Max, tmp);
    return answer;
}