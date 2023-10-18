#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5, M = N << 1;

int n;
int s[M];
int f[M][M];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> s[i];

    s[i + n] = s[i];
  }

  for (int len = 2; len <= n + 1; ++len) {
    for (int i = 1; i + len - 1 <= n << 1; ++i) {
      int l = i, r = i + len - 1;
      if (len == 2) {
        f[l][r] = 0;
      } else {
        for (int k = l + 1; k < r; ++k) {
          f[l][r] = std::max(f[l][r], f[l][k] + f[k][r] + s[l] * s[k] * s[r]);
        }
      }
    }
  }

  int res = 0;
  for (int i = 1; i <= n; ++i) {
    res = std::max(res, f[i][i + n]);
  }

  std::cout << res << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}