#include <bits/stdc++.h>
using namespace std;

const int max_n = 1e5 + 5; 
int alturas[max_n];
int dp[max_n];

int dif(int i, int k) {

    if(i == 0) {
        return 1e9;
    } else if(i == 1) {
        return 0;
    }
    if(i < k) {
        k = i - 1;
    }
    

    if(dp[i] != -1) {
        return dp[i];
    }

    int ans = 1e9;
    for(int c = 1; c <= k; c++) {
        
        ans = min(ans, dif(i - c, k) + abs(alturas[i] - alturas[i-c]));
    }

    dp[i] = ans;
    return ans;
}

int main() {
    int n, k; cin >> n >> k;
    // dp dynamic programming
    
    for(int pedra = 1; pedra <= n; pedra++) {
        int altura; cin >> altura;
        alturas[pedra] = altura;
        dp[pedra] = -1;
    }

    int minimo = dif(n, k);
    cout << minimo << endl;

}