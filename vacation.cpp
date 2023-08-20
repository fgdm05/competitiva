#include <bits/stdc++.h>
using namespace std;

const int max_n = 1e5 + 5;
int ativ[max_n][3]; // dia/at
int dp[max_n][3];
int otima(int dia, int at) {
    // Base
    if(dia == 1) {
        return ativ[1][at];
    }

    // Reutilizar (otimização de recursão)
    if(dp[dia][at] != -1) {
        return dp[dia][at];
    } 
    // Passo
    int res = 0;
    for(int i = 0; i < 3; i++) {
        if(i != at) {
            res = max(res, ativ[dia][at] + otima(dia - 1, i));
        }
    }

    // Guardar
    dp[dia][at] = res;
    return res;
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> ativ[i][j];
            dp[i][j] = -1;
        }
    }
    int res = max(otima(n, 0), otima(n, 1));
    res = max(res, otima(n, 2));
    
    cout << res;
}