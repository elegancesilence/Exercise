#include <bits/stdc++.h>

using LL = long long;

const int N = 1e3 + 5;

int n, m, q;
int a[N][N], b[N][N];

void insert(int x1, int y1, int x2, int y2, int x) {
  b[x1][y1] += x;
  b[x2 + 1][y1] -= x;
  b[x1][y2 + 1] -= x;
  b[x2 + 1][y2 + 1] += x;
}

void solve() {
  std::cin >> n >> m >> q;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      std::cin >> a[i][j];

      insert(i, j, i, j, a[i][j]);
    }
  }

  int x1, y1, x2, y2, x;
  while (q--) {
    std::cin >> x1 >> y1 >> x2 >> y2 >> x;

    insert(x1, y1, x2, y2, x);
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      b[i][j] += b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];

      std::cout << b[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solve();

  return 0;
}