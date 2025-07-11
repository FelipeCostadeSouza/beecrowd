#include <stdio.h>
#include <string.h>

int main()
{
    int Cdapeça, Ndepeças, Cdapeça2, Ndepeças2;
    double preço, preço2;
    
    scanf("%d %d %lf", &Cdapeça, &Ndepeças, &preço);
    scanf("%d %d %lf", &Cdapeça2, &Ndepeças2, &preço2);
    double valor;
    valor= (double)Ndepeças * preço;
    double valor2;
    valor2= (double)Ndepeças2 * preço2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor2+valor);
    
    return 0;
}
