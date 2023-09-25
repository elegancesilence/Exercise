#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int color[N];
std::vector<int> g[N];

bool dfs(int u, int c) {
  color[u] = c;

  for (int i = 0; i < g[u].size(); ++i) {
    int t = g[u][i];
    if (!color[t]) {
      if (!dfs(t, -c)) {
        return false;
      }
    } else {
      if (color[t] != -c) {
        return false;
      }
    }
  }

  return true;
}

void solution() {
  std::cin >> n >> m;

  while (m--) {
    int x, y;
    std::cin >> x >> y;

    g[x].push_back(y);
    g[y].push_back(x);
  }

  for (int i = 1; i <= n; ++i) {
    if (!color[i]) {
      if (!dfs(i, 1)) {
        std::cout << "No" << std::endl;

        return;
      }
    }
  }

  std::cout << "Yes" << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}