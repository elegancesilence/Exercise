#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 3e2 + 5;

int n, m;
int h[N][N];
int f[N][N];

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int dp(int x, int y) {
  int& v = f[x][y];
  if (v != -1) {
    return v;
  }

  v = 1;
  for (int i = 0; i < 4; ++i) {
    int a = x + dx[i], b = y + dy[i];
    if (a >= 1 && a <= n && b >= 1 && b <= m && h[a][b] < h[x][y]) {
      v = std::max(v, dp(a, b) + 1);
    }
  }

  return v;
}

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      std::cin >> h[i][j];
    }
  }

  memset(f, -1, sizeof f);

  int res = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      res = std::max(res, dp(i, j));
    }
  }

  std::cout << res << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  // std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}