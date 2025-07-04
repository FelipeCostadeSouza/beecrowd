#include <stdio.h>

int main() {
  int i, j;
  int n=0;

  

  int matriz[9][9];

  printf("Digite os elementos da matriz:\n");
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      
       
       printf("Elemento [%d][%d]: ", i, j);
       scanf("%d", matriz[i][j]);
      }
      
      while (matriz[i][j] < 0 || matriz[i][j] > 9) {
        printf("Valor inválido. Digite novamente: ");
        scanf("%d", matriz[i][j]);
      }
    }
  }
  for(i=0 && j=0; matriz[i][j+n] != matriz[i][j+1]; j++){
  
   if(j<9){
      matriz[i][2] != matriz[i][j]
      matriz[i][3] != matriz[i][j]
      matriz[i][4] != matriz[i][j] 
      matriz[i][5] != matriz[i][j]      
      matriz[i][6] != matriz[i][j]
      matriz[i][7] != matriz[i][j]
      matriz[i][8] != matriz[i][j]
   }else{
    j=0;
    i++;
    }
  }

for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", matriz[i][j]);    
    }
    printf("\n");
  }
  







  return 0;
}
