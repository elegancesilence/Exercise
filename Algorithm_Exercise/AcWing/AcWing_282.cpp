#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 3e2 + 5;

int n;
int s[N];
int f[N][N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> s[i];

    s[i] += s[i - 1];
  }

  for (int len = 2; len <= n; ++len) {
    for (int i = 1; i <= n - len + 1; ++i) {
      int l = i, r = i + len - 1;
      f[l][r] = 1e9;

      for (int k = l; k < r; ++k) {
        f[l][r] = std::min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
      }
    }
  }

  std::cout << f[1][n] << "\n";
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