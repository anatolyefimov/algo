#include <iostream>
#include <vector>

using namespace std;

int const MAX_N = 1e5 + 1;

int n, m;
vector <int> g[MAX_N];
vector <bool> used(MAX_N);

void dfs(int v) {
	used[v] = true;
	for (int to : g[v]) {
		if (!used[v]) {
			dfs(to);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (int i = 1; i <= n; ++i) {
		if (!used[i])
			dfs(i);
	}
	return 0;
}	
