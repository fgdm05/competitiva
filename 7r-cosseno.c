#include <stdio.h>

int dp[(int)1e8];

int fat(int n) {
	
	if(n == 0 || n == 1) {
		return 1;
	}

	if(dp[n] != -1) {
		return dp[n];
	}

	int res = n * fat(n-1);

	dp[n] = res;
	return res;
}

int dp_pot[(int)1e8];

int pot(int b, int e) {
	if(e == 0) {
		return 1;
	}

	if(dp_pot[e] != -1) {
		return dp_pot[e];
	} 

	int res = b * pot(b, e-1);

	dp_pot[e] = res;
	return res;
}


int main() {
	int n, x;
	scanf("%i %i", &n, &x);

	for(int i = 0; i <= 2*n+1; i++) {
		dp[i] = -1;
		dp_pot[i] = -1;
	}

	double soma = 0;
	for(int i = 0; i < n; i++) {
		int num = pot(x, 2*i);
		int deno = fat(2*i);
		double termo = (double) num / (double) deno;
		if(i%2) {
			termo = -termo;
		}
		soma += termo;
	}
	printf("%lf", soma);
}