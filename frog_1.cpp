#include <bits/stdc++.h>
using namespace std;

const int max_n = 1e5 + 5; 
int alturas[max_n];
int dp[max_n];

int dif(int i) {

    // Passo
    if(i == 0) {
        return 1e9;
    } else if(i == 1) {
        return 0;
    }

    int fim = alturas[i];
    int p_1 = alturas[i-1];
    int p_2 = alturas[i-2];

    // Reutilizar
    if(dp[i] != -1) {
        return dp[i];
    }

    int dif_1 = abs(fim - p_1);
    int dif_2 = abs(fim - p_2);
    
    int minimo = min(
        dif_1 + dif(i-1),
        dif_2 + dif(i-2)
    );

    // Guardar
    dp[i] = minimo;
    return minimo;
}

int main() {
    int n; cin >> n;
    // dp dynamic programming
    
    for(int pedra = 1; pedra <= n; pedra++) {
        int altura; cin >> altura;
        alturas[pedra] = altura;
        dp[pedra] = -1;
    }

    int minimo = dif(n);
    cout << minimo << endl;

}