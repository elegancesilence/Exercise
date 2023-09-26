#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;

int t, n;
std::vector<PII> arr;

void solution() {
  std::cin >> t;

  int ans = -1;
  while (t--) {
    std::cin >> n;

    int max = -1;
    for (int i = 0; i < n; ++i) {
      int a, b;
      std::cin >> a >> b;

      if (a <= 10) {
        if (max < b) {
          max = b;

          ans = i + 1;
        }
      }
    }

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