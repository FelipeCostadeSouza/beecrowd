#include <stdio.h>
#include <math.h> 
int main() {
 
    double pi=3.14159;
    double R;
    scanf("%lf", &R);
    double V=(4.0/3)*pi*pow(R,3);
    
    printf("VOLUME = %.3lf\n", V);
    return 0;
}
