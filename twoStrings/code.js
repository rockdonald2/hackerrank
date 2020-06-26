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

// Complete the twoStrings function below.
function twoStrings(s1, s2) {
    let s1Obj = {};
    for (let i = 0; i < s1.length; i++) {
        if (s1[i] in s1Obj) {
            s1Obj[s1[i]] += 1;
        } else {
            s1Obj[s1[i]] = 1;
        }
    }

    let s2Obj = {};
    for (let j = 0; j < s2.length; j++) {
        if (s2[j] in s2Obj) {
            s2Obj[s2[j]] += 1;
        } else {
            s2Obj[s2[j]] = 1;
        }
    }

    for (let key in s1Obj) {
        if (key in s2Obj) {
            return "YES";
        }
    }

    return "NO";
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const q = parseInt(readLine(), 10);

    for (let qItr = 0; qItr < q; qItr++) {
        const s1 = readLine();

        const s2 = readLine();

        let result = twoStrings(s1, s2);

        ws.write(result + "\n");
    }

    ws.end();
}
