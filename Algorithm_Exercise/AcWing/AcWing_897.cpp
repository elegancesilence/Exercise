#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, m;
char a[N], b[N];
int f[N][N];

void solution() {
  std::cin >> n >> m;
  std::cin >> a + 1 >> b + 1;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      f[i][j] = std::max(f[i - 1][j], f[i][j - 1]);
      if (a[i] == b[j]) {
        f[i][j] = std::max(f[i][j], f[i - 1][j - 1] + 1);
      }
    }
  }

  std::cout << f[n][m] << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}