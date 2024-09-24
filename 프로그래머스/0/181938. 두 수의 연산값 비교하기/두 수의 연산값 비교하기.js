function solution(a, b) {
    let answer = 0;
    let A = String(a) + String(b);
    let B = 2 * a * b;
    if(A > B) {
        answer = Number(A);
    }
    else if(B > A) {
        answer = B;
    }
    else {
        answer = Number(A);
    }
    return answer;
}