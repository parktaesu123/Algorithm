function solution(binomial) {
    var answer = 0;
    const [a, op, b] = binomial.split(" ");
    
    switch (op) {
    case '+':
      answer = Number(a) + Number(b);
      break;
    case '-':
      answer = Number(a) - Number(b);
      break;
    case '*':
      answer = Number(a) * Number(b);
  }
    
    return answer;
}