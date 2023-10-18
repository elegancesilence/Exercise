#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e2 + 5;

int n, k;
int f[N][N];

void solution() {
  std::cin >> n >> k;

  f[0][0] = 1;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i && j <= k; ++j) {
      f[i][j] = f[i - 1][j - 1] + f[i - j][j];
    }
  }

  std::cout << f[n][k] << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}