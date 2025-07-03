#include <stdio.h>
#include <string.h>

int main()
{
    int A;
    float B;
    char C;
    char D[49];

    scanf("%d %f %c", &A, &B, &C);
    getchar(); 
    fgets(D, 49, stdin);
    {
        int i = strcspn(D, "\n");
        D[i] = '\0';
    }
    printf("%d%.6f%c%s\n", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%10d%10.6f%10c%10.10s\n", A, B, C, D);
    return 0;
}
