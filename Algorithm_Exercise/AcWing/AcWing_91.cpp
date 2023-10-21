#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 20, M = 1 << N;

int n;
int w[N][N];
int f[M][N];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cin >> w[i][j];
    }
  }

  memset(f, 0x3f, sizeof f);

  f[1][0] = 0;
  for (int i = 0; i < 1 << n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i >> j & 1) {
        for (int k = 0; k < n; ++k) {
          if ((i - (1 << j)) >> k & 1) {
            f[i][j] = std::min(f[i][j], f[i - (1 << j)][k] + w[k][j]);
          }
        }
      }
    }
  }

  std::cout << f[(1 << n) - 1][n - 1] << "\n";
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