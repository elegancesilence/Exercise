#include <bits/stdc++.h>

using LL = long long;

const int N = 1e3 + 5;

int n, m, q;
int a[N][N], s[N][N];

void solution() {
  std::cin >> n >> m >> q;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      std::cin >> a[i][j];
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
    }
  }

  int x1, y1, x2, y2;
  while (q--) {
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1]
              << std::endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  solution();

  return 0;
}