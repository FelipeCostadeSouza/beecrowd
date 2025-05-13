#include <stdio.h>

int main()
{
    double A;
    double P=3.14159;
    double R;
    double E;
    scanf("%lf", &R);
    E=R*R;
    A=P*E;
    printf("A=%.4lf\n", A);
    return 0;
}
