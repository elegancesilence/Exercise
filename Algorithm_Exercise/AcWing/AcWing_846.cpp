#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5;

int n, m;
int g[N][N], d[N][N];

int bfs() {
  std::queue<PII> q;
  q.push({0, 0});

  d[0][0] = 0;

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  while (!q.empty()) {
    PII t = q.front();
    q.pop();

    for (int i = 0; i < 4; ++i) {
      int x = t.first + dx[i];
      int y = t.second + dy[i];
      if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1) {
        d[x][y] = d[t.first][t.second] + 1;

        q.push({x, y});
      }
    }
  }

  return d[n - 1][m - 1];
}

void solution() {
  std::cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cin >> g[i][j];
    }
  }

  memset(d, -1, sizeof d);

  std::cout << bfs() << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}