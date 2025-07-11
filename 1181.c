#include <stdio.h>

int main() {

	int L, i, j;
	char Maiusculo;
	scanf("%d", &L);
	scanf(" %c", &Maiusculo);

	double M[12][12];
	for(int i=0; i<12 ; i++) {
		for(int j=0; j<12; j++) {
			scanf("%lf", &M[i][j]);
		}

	}
	double soma = 0.0;
	for (int j = 0; j < 12; j++) {
		soma += M[L][j];
	}
	if(Maiusculo=='M') {
		soma/=12;
	}
	printf("%.1lf\n", soma);

	return	0;

}
