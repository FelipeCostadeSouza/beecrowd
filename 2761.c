#include <stdio.h>
#include <string.h>

int main()
{
    int A;
    float B;
    char C;
    char D[51];
    
    scanf("%d %f %c", &A, &B, &C);
    fgets(D,51,stdin);{
       int i = strcspn(D, "\n");
       D[i] = '\0';
    }
    printf("%d%.6f%c%s", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%10d%10f%c%.10s", A, B, C, D);
    
    return 0;
}
