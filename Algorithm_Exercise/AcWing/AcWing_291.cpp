#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 15, M = 1 << N;

int n, m;
int f[N][M];
bool st[M];

void solution() {
  while (std::cin >> n >> m, n || m) {
    for (int i = 0; i < 1 << n; ++i) {
      int cnt = 0;
      st[i] = true;
      for (int j = 0; j < n; ++j) {
        if (i >> j & 1) {
          if (cnt & 1) {
            st[i] = false;

            cnt = 0;

            break;
          }
        } else {
          ++cnt;
        }
      }

      if (cnt & 1) {
        st[i] = false;
      }
    }

    memset(f, 0, sizeof f);

    f[0][0] = 1;
    for (int i = 1; i <= m; ++i) {
      for (int j = 0; j < 1 << n; ++j) {
        for (int k = 0; k < 1 << n; ++k) {
          if (!(j & k) && st[j | k]) {
            f[i][j] += f[i - 1][k];
          }
        }
      }
    }

    std::cout << f[m][0] << "\n";
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