//normal declaration
function say(){
    console.log("Hello World");
}
say();

// arrow function

let say1 = () => {
    console.log("Hello World from arrow function");
}
say1()

//returning a function

function say3(){
    return ()=>{
        console.log("returning this from a function");
    }
}
var saying=say3();
console.log(saying());