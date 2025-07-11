#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    while(N>0){
        int tentativas;
        scanf("%d", &tentativas);
        if(tentativas % 2 == 0 && tentativas> 0){
            printf("EVEN POSITIVE\n");
        } else if(tentativas == 0){
            printf("NULL\n");
        } else if(tentativas % 2 == 1 && tentativas> 0){    
            printf("ODD POSITIVE\n");
        } else if(tentativas % 2 == 0 && tentativas<0){
            printf("EVEN NEGATIVE\n");
        }else{
            printf("ODD NEGATIVE\n");
        }
        N--;
    }
    
	return 0;
}
