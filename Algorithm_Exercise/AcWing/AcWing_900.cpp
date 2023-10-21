#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n;
int f[N][N];

void solution() {
  std::cin >> n;

  f[1][1] = 1;
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % MOD;
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans = (ans + f[n][i]) % MOD;
  }

  std::cout << ans << "\n";
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
