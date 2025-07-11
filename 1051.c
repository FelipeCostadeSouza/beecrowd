#include <stdio.h>

int main() {
    double salario, imposto = 0.0;

    if (scanf("%lf", &salario) != 1)
        return 0;

    
    if (salario > 4500.00) {
        imposto += (salario - 4500.00) * 0.28;
        salario = 4500.00;
    }
    if (salario > 3000.00) {
        imposto += (salario - 3000.00) * 0.18;
        salario = 3000.00;
    }
    if (salario > 2000.00) {
        imposto += (salario - 2000.00) * 0.08;
    }

    if (imposto == 0.0) {
        printf("Isento\n");
    } else {
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}
