#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int N = 2e2 + 5;

int n, m, q;
std::vector<std::vector<int>> d(N + 1, std::vector<int>(N + 1));

void floyd() {
  for (int k = 1; k <= n; ++k) {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        d[i][j] = std::min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

void solution() {
  std::cin >> n >> m >> q;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i == j) {
        d[i][j] = 0;
      } else {
        d[i][j] = INF;
      }
    }
  }

  while (m--) {
    int x, y, w;
    std::cin >> x >> y >> w;

    d[x][y] = std::min(d[x][y], w);
  }

  floyd();

  while (q--) {
    int a, b;
    std::cin >> a >> b;

    if (d[a][b] > INF / 2) {
      std::cout << "impossible" << std::endl;
    } else {
      std::cout << d[a][b] << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}