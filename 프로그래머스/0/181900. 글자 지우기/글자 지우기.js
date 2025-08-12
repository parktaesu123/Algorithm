function solution(my_string, indices) {
    let arr = my_string.split('');
    indices.sort((a, b) => b - a);
        for(let j = 0; j<indices.length; j++) {
            arr.splice(indices[j], 1)
        }
    
    return arr.join("");
}