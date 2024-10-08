function solution(arr1, arr2) {
    var a = 0;
    var b = 0;
    
    for(let i = 0; i<arr1.length; i++) {
        a += arr1[i];
    }
    for(let i = 0; i<arr2.length; i++) {
        b += arr2[i];
    }
        
    if(arr1.length > arr2.length)
        return 1;
    else if(arr1.length < arr2.length)
        return -1;
    
    if(a>b)
        return 1;
    else if(b>a)
        return -1;
    
    else 
        return 0;
}