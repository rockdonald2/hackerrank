'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the makeAnagram function below.
function makeAnagram(a, b) {
    let aObj = {};
    let bObj = {};

    let deletions = 0;

    for (let aC = 0; aC < a.length; aC++) {
        if (a[aC] in aObj) {
            aObj[a[aC]] += 1;
        } else {
            aObj[a[aC]] = 1;
        }
    }

    for (let bC = 0; bC < b.length; bC++) {
        if (b[bC] in bObj) {
            bObj[b[bC]] += 1;
        } else {
            bObj[b[bC]] = 1;
        }
    }

    let keysA = Object.keys(aObj);
    let keysB = Object.keys(bObj);

    for (let i = 0; i < keysA.length; i++) {
        if (keysA[i] in bObj) {
            if (bObj[keysA[i]] !== aObj[keysA[i]]) {
                deletions += (Math.abs(bObj[keysA[i]] - aObj[keysA[i]]));
            }
        } else {
            deletions += aObj[keysA[i]];
        }
    }

    for (let j = 0; j < keysB.length; j++) {
        if (!(keysB[j] in aObj)) {
            deletions += bObj[keysB[j]];
        }
    }

    return deletions;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const a = readLine();

    const b = readLine();

    const res = makeAnagram(a, b);

    ws.write(res + '\n');

    ws.end();
}
