#include <stdio.h>



int main() {
	int i, j;
	int n=0;
	int matriz[9][9];
	int *pmatriz = &matriz[0][0];
	printf("Digite os elementos da matriz:\n");
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {


			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);


			while (matriz[i][j] < 0 || matriz[i][j] > 9) {
				printf("Valor invC!lido. Digite novamente:\n ");
				scanf("%d", &matriz[i][j]);
			}
		}
	}

	for(int i = 0; i < 81; i++) {
		printf("%d ", *(pmatriz + i));
		int tamanho = sizeof(matriz) / sizeof(&matriz[0][0]);
	}



	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
