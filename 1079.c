#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    while (N>0) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", (a*2+b*3+c*5)/10);
        N--;
    }
    
    
    return 0;
}
