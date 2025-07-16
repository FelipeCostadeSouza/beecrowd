#include <stdio.h>


int mdc(int a, int b) {
	if (b == 0) {
		return a;
	}
	return mdc(b, a % b);
}


int main()
{
	int quantidade1, quantidade2;

	int n;
	scanf("%d", &n);
	while(n>0) {
		scanf("%d %d", &quantidade1, &quantidade2);
		int resultado = mdc(quantidade1, quantidade2);
		printf("%d\n", resultado);

		n--;
	}

	return 0;
}
