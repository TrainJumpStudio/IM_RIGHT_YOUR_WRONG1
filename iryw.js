



function createAndSumArr(x){


    const start = Date.now();


    const arr = new Array(x);


    for (let i = 0; i < x-1; i++) arr[i] = i;


    
    return [(arr.reduce((acc,curr) => acc+curr,0)),((Date.now()-start)/1000)];

}


const [sum,t] = createAndSumArr(100000000);

console.log(`Sum -> ${sum}, Time -> ${t}`);
