#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 1e7+5;
vector<pair<long long int,int>> adj[MAX_N];
long long int dis[MAX_N];

void dekker(pair<long long int,int> root) {
	dis[root.second] = 0; 
	priority_queue<pair<long long int,int>, vector<pair<long long int,int>>, greater<pair<long long int,int>>>
		pq;
	pq.push(root);
	while (!pq.empty()) {
		pair<long long int, int> pu = pq.top();
		pq.pop();
		for (pair<long long int, int> pv : adj[pu.second]) {
			if (dis[pu.second] + pv.first < dis[pv.second]) {
				dis[pv.second] = dis[pu.second] + pv.first;
				pq.push(pv);
			}
		}
	}
}


const long long int MAX_L = 1e18;
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; 
		long long int l;
		cin >> u >> v >> l;
		adj[u].push_back({l,v});
	}
	for (int i = 0; i <= n; i++) {
		dis[i] = MAX_N;
	}
	dekker({MAX_L, 1});
	for (int i = 1; i <= n; i++) {
		cout << dis[i] << endl;
	}

}