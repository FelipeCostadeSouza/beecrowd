#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void fibonacci(int max, long fib[], long calls[]){
    fib[0] = 0;
    fib[1] = 1;
    calls[0] = 0;
    calls[1] = 0;
    for (int n = 2; n <= max; n++) {
        fib[n] = fib[n - 1] + fib[n - 2];
        calls[n] = 2 + calls[n - 1] + calls[n - 2];
    }
}
int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 0;
    }
    const int Max = 39;
    long fib[Max + 1], calls[Max + 1];
    fibonacci(Max, fib, calls);

    while (N--) {
        int V;
        scanf("%d", &V);
        printf("fib(%d) = %ld calls = %ld\n", V, calls[V], fib[V]);
    }

    return 0;
}
