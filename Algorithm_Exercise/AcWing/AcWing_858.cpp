#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int N = 5e2 + 5;

int n, m;
int dis[N];
bool st[N];
std::vector<std::vector<int>> g(N + 1, std::vector<int>(N + 1, INF));

void prim() {
  memset(dis, 0x3f, sizeof dis);
  dis[1] = 0;

  int res = 0;
  for (int i = 0; i < n; ++i) {
    int t = -1;
    for (int j = 1; j <= n; ++j) {
      if (!st[j] && (t == -1 || dis[j] < dis[t])) {
        t = j;
      }
    }

    if (dis[t] > INF / 2) {
      std::cout << "impossible" << std::endl;

      return;
    }

    res += dis[t];
    st[t] = true;

    for (int j = 1; j <= n; ++j) {
      if (!st[j]) {
        dis[j] = std::min(dis[j], g[t][j]);
      }
    }
  }

  std::cout << res << std::endl;
}

void solution() {
  std::cin >> n >> m;

  while (m--) {
    int x, y, w;
    std::cin >> x >> y >> w;

    g[x][y] = g[y][x] = std::min(g[x][y], w);
  }

  prim();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}