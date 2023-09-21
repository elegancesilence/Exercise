#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 5e2 + 5;

int n, m;
int dis[N];
bool st[N];
std::vector<std::vector<int>> g(N + 1, std::vector<int>(N + 1));

void dijkstra() {
  memset(dis, 0x3f, sizeof dis);
  dis[1] = 0;

  for (int i = 0; i < n; ++i) {
    int t = -1;
    for (int j = 1; j <= n; ++j) {
      if (!st[j] && (t == -1 || dis[j] < dis[t])) {
        t = j;
      }
    }

    st[t] = true;

    for (int j = 1; j <= n; ++j) {
      dis[j] = std::min(dis[j], dis[t] + g[t][j]);
    }
  }

  if (dis[n] == 0x3f3f3f3f) {
    std::cout << -1 << std::endl;
  } else {
    std::cout << dis[n] << std::endl;
  }
}

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      g[i][j] = 0x3f3f3f3f;
    }
  }

  while (m--) {
    int a, b, w;
    std::cin >> a >> b >> w;

    g[a][b] = std::min(g[a][b], w);
  }

  dijkstra();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}
