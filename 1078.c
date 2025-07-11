#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for(int i=1; i<=10; i++){
	    int t=i*N;
	    printf("%d x %d = %d\n", i, N, t);
	}
	
	return 0;
}
