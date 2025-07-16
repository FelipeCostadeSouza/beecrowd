#include <stdio.h>
int calls = 0;

int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) {
		return 1;
	} else {
		calls+=2;
		return fib(n-1) + fib(n-2);
	}
}


int main()
{
	int n;
	scanf("%d", &n);
	while(n>0) {
		int x;
		scanf("%d", &x);
		calls = 0;
		int result = fib(x);
		printf("fib(%d) = %d calls = %d\n", x, calls, result);
		n--;
	}

	return 0;
}
