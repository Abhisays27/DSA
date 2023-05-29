let person1 ={
    firstName: "abhishek",
    lastName: "nautiyal",
    age:28,
    
    fullName: function(){
        console.log(this.firstName + " "+this.lastName);
    }
};

console.log(person1.firstName);
person1.fullName();

function Person(first,last,a){
    this.firstName = first;
    this.lastName = last;
    this.age = a;
}
let Person2 = new Person("abhishek","nautiyal",21);
console.log(Person2);

let sum =(a,b)=>{

}

document.addEventListener('click',()=>{

})

let arr = [2,14,4,15,6,7,88,99,76]
let arr1 = arr.filter((val)=>{
    return val>10;
})

let team = [
    {
        name: "abhishek",
        position:"devloper"
    },
    {
        name: "abhishek1",
        position:"cto"
    },
    {
        name: "abhishek2",
        position:"dev"
    },
    {
        name: "abhishek3",
        position:"back"
    },
];
let devloper = team.filter((val)=>{
    val.position =="devloper"
})
console.log(devloper);