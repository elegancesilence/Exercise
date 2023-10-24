#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 35;

int n;
int g[N][N];

void solution() {
  std::cin >> n;

  g[1][1] = 1;
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      g[i][j] = g[i - 1][j - 1] + g[i - 1][j];
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << std::setw(5) << g[i][j];
    }
    std::cout << "\n";
  }
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