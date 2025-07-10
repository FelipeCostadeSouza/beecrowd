#include <stdio.h>

int main() {
	double N1, N2, N3, N4, Nf, Ne, Mt;
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	Nf=(N1*2+N2*3+N3*4+N4*1)/10;
	printf("Media: %.1lf\n", Nf);
	if(Nf<5.0) {
		printf("Aluno reprovado.\n");

	} else if(Nf>=7) {
		printf("Aluno aprovado.\n");

	} else {
		printf("Aluno em exame.\n");
		scanf("%lf", &Ne);
		printf("Nota do exame: %.1lf\n", Ne);
		Mt=(Ne+Nf)/2;
		if(Mt>=5) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", Mt);
		} else {
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", Mt);
		}
	}
	return 0;
}
