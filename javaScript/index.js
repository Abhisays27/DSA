//Rest parameter
function sum(...args){
    console.log(args);
    let result = 0;
    for(let i=0;i<args.length;i++){
        result +=args[i];
    }
}
sum(2,5,4,7);

//Map function
let arr = [2,3,4,5,6];
let arr1 = arr.map((val) => 
     val * 3
);

//this 

//same property ke ander ager hame value chaiye

