#include <stdio.h>
#include <string.h>

int main() {
    int A;
    float B;
    char C;
    char D[51];

    if (scanf("%d %f %c\n", &A, &B, &C) != 3) return 0;
    if (!fgets(D, sizeof D, stdin)) return 0;
    D[strcspn(D, "\n")] = '\0';

    printf("%d%.6f%c%s\n", A, B, C, D);

    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);

    printf("%10d%10.6f%10c%10s\n", A, B, C, D);

    return 0;
}
