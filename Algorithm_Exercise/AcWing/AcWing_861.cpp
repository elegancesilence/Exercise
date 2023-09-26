#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 5e2 + 5;

int n, m, t;
int match[N];
bool st[N];
std::vector<int> g[N];

bool find(int u) {
  for (int i = 0; i < g[u].size(); ++i) {
    int t = g[u][i];
    if (!st[t]) {
      st[t] = true;

      if (!match[t] || find(match[t])) {
        match[t] = u;

        return true;
      }
    }
  }

  return false;
}

void solution() {
  std::cin >> n >> m >> t;

  while (t--) {
    int a, b;
    std::cin >> a >> b;

    g[a].push_back(b);
  }

  int res = 0;
  for (int i = 1; i <= n; ++i) {
    memset(st, false, sizeof st);

    if (find(i)) {
      ++res;
    }
  }

  std::cout << res << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}