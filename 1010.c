#include <stdio.h>
#include <string.h>

int main()
{
    int Cdapeca, Ndepecas, Cdapeca2, Ndepecas2;
    double preco, preco2;
    
    scanf("%d %d %lf", &Cdapeca, &Ndepecas, &preco);
    scanf("%d %d %lf", &Cdapeca2, &Ndepecas2, &preco2);
    double valor;
    valor= (double)Ndepecas * preco;
    double valor2;
    valor2= (double)Ndepecas2 * preco2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor2+valor);
    
    return 0;
}
