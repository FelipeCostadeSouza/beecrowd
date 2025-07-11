#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = (b*b)-4*a*c;
	double raiz_de_delta = sqrt(delta);
	double result1 = (-b+raiz_de_delta)/(2*a);
	double result2 = (-b-raiz_de_delta)/(2*a);

	if(a==0.0 || delta<0) {
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5f\n", result1);
		printf("R2 = %.5f\n", result2);
	}
	return 0;
}
