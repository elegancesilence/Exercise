#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, m;
std::string a, b;
int f[N][N];

void solution() {
  std::cin >> n >> a >> m >> b;

  a = " " + a;
  b = " " + b;

  for (int i = 0; i <= m; ++i) {
    f[0][i] = i;
  }

  for (int i = 0; i <= n; ++i) {
    f[i][0] = i;
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      f[i][j] = std::min(f[i - 1][j], f[i][j - 1]) + 1;
      if (a[i] == b[j]) {
        f[i][j] = std::min(f[i][j], f[i - 1][j - 1]);
      } else {
        f[i][j] = std::min(f[i][j], f[i - 1][j - 1] + 1);
      }
    }
  }

  std::cout << f[n][m] << "\n";
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