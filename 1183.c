#include <stdio.h>

int main() {

	int i, j=0;
	char Maiusculo;
	scanf(" %c", &Maiusculo);
	double soma = 0.0;
	double M[12][12];
	for(i=0; i<12 ; i++) {
		for(j=0; j<12; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
	for (i = 0; i < 12; i++) {
		for (j = i + 1; j < 12; j++) {
			soma += M[i][j];
		}
	}

	if(Maiusculo=='M') {
		soma/=66.0;
	}
	printf("%.1lf\n", soma);

	return	0;
}
