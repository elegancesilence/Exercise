#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 25;

int n;
int g[N][N];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      if (j == 0 || j == i) {
        g[i][j] = 1;
      } else {
        g[i][j] = g[i - 1][j - 1] + g[i - 1][j];
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << g[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}