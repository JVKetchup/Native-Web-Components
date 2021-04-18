//sudo apt install clang llvm lld binaryen
//clang --target=wasm32 -O3 -nostdlib -Wl,--no-entry -Wl,--export-all -o app.wasm app.c && wasm-opt -Os app.wasm -o app-optimized.wasm

typedef int T;
T COMPLEMENT(T a) {return ~a;}
T UNION(T a, T b) {return a|b;}
T INTERSECTION(T a, T b) {return a&b;}
T RELATIVE_COMPLEMENT(T a, T b) {return a&~b;}
T SYMMETRIC_DIFFERENCE(T a, T b) {return (a&~b)|(b&~a);}