#include <stdio.h>

int verificar_linha(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        int freq[10] = {0};
        for (int j = 0; j < 9; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || freq[num]++) return 0;
        }
    }
    return 1;
}

int verificar_coluna(int matriz[9][9]) {
    for (int j = 0; j < 9; j++) {
        int freq[10] = {0};
        for (int i = 0; i < 9; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || freq[num]++) return 0;
        }
    }
    return 1;
}

int verificar_submatriz(int matriz[9][9]) {
    for (int bloco_i = 0; bloco_i < 9; bloco_i += 3) {
        for (int bloco_j = 0; bloco_j < 9; bloco_j += 3) {
            int freq[10] = {0};
            for (int i = bloco_i; i < bloco_i + 3; i++) {
                for (int j = bloco_j; j < bloco_j + 3; j++) {
                    int num = matriz[i][j];
                    if (num < 1 || num > 9 || freq[num]++) return 0;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {
        int matriz[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        int eh_valido = verificar_linha(matriz) &&
                        verificar_coluna(matriz) &&
                        verificar_submatriz(matriz);

        printf("Instancia %d\n", instancia);
        if (eh_valido) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n"); 
    }

    return 0;
}
