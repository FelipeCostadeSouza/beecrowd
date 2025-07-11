#include <stdio.h>
 
int main() {
 
    int N, M, H;
    scanf("%d", &N);;
    H = N / 3600;
    N %= 3600;
    M = N / 60;
    N %= 60;
    
    
    
    printf("%d:%d:%d\n", H, M, N);
    
 
    return 0;
}
