function solution(t, p) {
    let pLength = p.length;
    let cnt = 0;
    for(let i = 0; i<=t.length - pLength; i++) {
        if(Number(t.slice(i, i + p.length)) <= Number(p)) {
            cnt++;
        }
    }
    return cnt;
}