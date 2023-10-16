#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5;

int n, m;
int v[N][N], w[N][N], s[N];
int f[N];

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> s[i];
    for (int j = 0; j < s[i]; ++j) {
      std::cin >> v[i][j] >> w[i][j];
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = m; j >= 0; --j) {
      for (int k = 0; k < s[i]; ++k) {
        if (v[i][k] <= j) {
          f[j] = std::max(f[j], f[j - v[i][k]] + w[i][k]);
        }
      }
    }
  }

  std::cout << f[m] << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}