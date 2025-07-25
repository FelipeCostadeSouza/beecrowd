#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n>0){
        char cifra[51];
        int t;
        fgets(cifra, 51, stdin);
        cifra[strcspn(cifra, "\n")] = '\0';
        scanf("%d", &t);
        getchar();
        
        for(int i=0; cifra[i] != '\0'; i++){
            if(cifra[i] >= 'A' && cifra[i] <= 'Z' && cifra[i]-t < 'A'){
                cifra[i]=cifra[i]-t+26;
                
            } else {
                cifra[i]=cifra[i]-t;
            }
        }
        printf("%s\n", cifra);
        n--;
    }
    return 0;
}
