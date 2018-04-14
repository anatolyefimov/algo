#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, m;
	int s;
	cin >> n >> m >> s;
	vector <int > g[n + 1];
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	queue <int> q;
	vector <bool> used(n + 1);
	while (!q.empty()) {
		int v = q.front();
		used[v] = 1;	
		q.pop();
		for (int to: g[v]) {
			if (!used[to]) {
				used[to] = 1;
				q.push(to);
			}
		}
	}
	return 0;
}

