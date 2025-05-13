#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C, X, M;
    scanf("%d %d %d", &A, &B, &C);
    X = (A+B+abs(A-B))/2;
    M = (C+X+abs(C-X))/2;
    printf("%d eh o maior\n", M);
    
    return 0;
}
