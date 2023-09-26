#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int t, n;
int arr[N], cnt[N];

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n;

    int x;
    for (int i = 0; i < n; ++i) {
      std::cin >> x;

      if (x <= n) {
        ++cnt[x];
      }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
      int res = 0;
      for (int j = 1; j <= i / j; ++j) {
        if (!(i % j)) {
          res += cnt[j];

          if (i / j != j) {
            res += cnt[i / j];
          }
        }

        ans = std::max(ans, res);
      }
    }

    memset(cnt, 0, sizeof cnt);

    std::cout << ans << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}