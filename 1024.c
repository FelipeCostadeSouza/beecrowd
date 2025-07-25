#include <stdio.h>
#include <string.h>




int apenasletras(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main()
{
	char CHEGA[1000];

	int N;
	scanf("%d", &N);
	getchar();
	while(N>0) {
		fgets(CHEGA, 1000, stdin);
		int t = strlen(CHEGA);
        if (CHEGA[t - 1] == '\n') {
            CHEGA[t - 1] = '\0';
            t--;
        }
		char Oloco[t+1];
		for (int i = 0; i < t; i++) {
            if (apenasletras(CHEGA[i])) {
                CHEGA[i] = CHEGA[i] + 3;
            }
        }
		
		for (int j = 0, e = t - 1; j < t; j++, e--) {
            Oloco[j] = CHEGA[e];
        }
        Oloco[t] = '\0';
		
		for (int i = t / 2; i < t; i++) {
			Oloco[i] = Oloco[i] -1;
		}
		printf("%s\n", Oloco);
		N--;
	}
	return 0;
}
