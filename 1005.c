#include <stdio.h>

int main()
{
    double A,B;
    double x;
    
    scanf("%lf %lf", &A, &B);
    x= (A*3.5+B*7.5) / 11.0; 
    printf("MEDIA = %.5lf\n", x);
    
    return 0;
}
