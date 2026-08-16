function createCounter(n: number): () => number {
    let m = n;
    return function() {
        return m++;
    }
}


/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
