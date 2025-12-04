function calc() {
    let n = parseInt(document.getElementById('n').value);
    let result = 0;

    // n ≠ ±1
    if (n !== 1 && n !== -1) {
        let A = (n - 2) / (n * n);
        let B = (n + 2) / (n * n + 2 * n + 1);
        let C = Math.pow(n, 4);
        let D = (2 * n * n + 1) / 2;

        result = (A - B) * C - D;
    } 
    // n = ±1
    else {
        result = (2 * n * n + 10 * n + 12) / (n + 1);
    }

    document.getElementById('result').value = result;
}
