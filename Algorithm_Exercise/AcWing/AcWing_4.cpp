#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5;

int n, m;
int v[N], w[N], s[N];
int f[N][N];

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> v[i] >> w[i] >> s[i];
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      for (int k = 0; k <= s[i] && k <= j / v[i]; ++k) {
        f[i][j] = std::max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);
      }
    }
  }

  std::cout << f[n][m] << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}