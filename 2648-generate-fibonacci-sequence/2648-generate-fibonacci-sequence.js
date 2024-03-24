var fibGenerator = function*() {
    let a = 0, b = 1;
    yield a;
    yield b;

    while (true) {
        let c = a + b;
        a = b;
        b = c;
        yield c;
    }
};