function sum(...args){
    console.log(args);
    let result = 0;
    for(let i=0;i<args.length;i++){
        result +=args[i];
    }
}
sum(2,5,4,7);