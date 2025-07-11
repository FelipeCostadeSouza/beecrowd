#include <stdio.h>
 
int main() {
 
    char nome[50];
    double salario;
    double Seu_Siriqueijo;
    double TOTAL;
    fgets(nome, 50, stdin);
    scanf("%lf %lf", &salario, &Seu_Siriqueijo);
    double formula_secreta=Seu_Siriqueijo*0.15;
    TOTAL= salario+formula_secreta;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    
    return 0;
}
