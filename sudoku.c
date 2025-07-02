#include <stdio.h>

int main() {
  int i, j;


  

  int matriz[9][9];

  printf("Digite os elementos da matriz:\n");
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      
      
      while (matriz[i][j] < 0 || matriz[i][j] > 9) {
        printf("Valor inválido. Digite novamente: ");
        scanf("%d", &matriz[i][j]);
      }
    }
  }

  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  if(matriz[][])







  return 0;
}
