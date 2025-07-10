#include <stdio.h>

int main() {
    int Hi, Mi, Hf, Mf;
    int inicio, fim, duracao, horas, minutos;

  
    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);

    
    inicio = Hi * 60 + Mi;
    fim = Hf * 60 + Mf;

    
    if (fim <= inicio) {
        fim += 24 * 60;
    }

    duracao = fim - inicio;
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
