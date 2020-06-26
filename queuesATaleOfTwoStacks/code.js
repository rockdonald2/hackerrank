

function processData(input) {
    //Enter your code here

    input = input.split(/\s+/gi);
    input.shift();
    input = input.map((n) => Number.parseInt(n));

    let collection = [];

    for (let i = 0; i < input.length; i++) {
        if (input[i] === 1) {
            collection.push(input[i + 1]);
            i += 1;
        } else if (input[i] === 2) {
            collection.shift();
        } else if (input[i] === 3) {
            console.log(collection[0]);
        }
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
