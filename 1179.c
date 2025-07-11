#include <stdio.h>

int main() {
    int i, n = 0, m = 0;
    int par[5];
    int impar[5];
    int vetor;

    for (int temp = 0; temp < 15; temp++) {
        scanf("%d", &vetor);

        if (vetor % 2 == 0) {
            par[n] = vetor;
            n++;
            if (n == 5) {
                for (i = 0; i < 5; i++) {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                n = 0;
            }
        } else {
            impar[m] = vetor;
            m++;
            if (m == 5) {
                for (i = 0; i < 5; i++) {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                m = 0;
            }
        }
    }

    // Imprimir os que restaram após os 15 números
    for (i = 0; i < m; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (i = 0; i < n; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
