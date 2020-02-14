'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the lonelyinteger function below.
function lonelyinteger(a) {
    if (a.length == 1) {
        return a[0];
    }

    let dict = {};
    for (let i = 0; i < a.length; i++) {
        if (a[i] in dict) {
            dict[a[i]] += 1;
        } else {
            dict[a[i]] = 1;
        }
    }

    for (let i in dict) {
        if (dict[i] != 1) {
            delete dict[i];
        }
    }

    return Object.keys(dict)[0];
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine(), 10);

    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));

    let result = lonelyinteger(a);

    ws.write(result + "\n");

    ws.end();
}
