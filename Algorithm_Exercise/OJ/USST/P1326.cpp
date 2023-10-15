#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e3 + 5;

int n, k;
std::vector<int> a(N + 1), s(N + 1);

void solution() {
  std::cin >> n >> k;

  for (int i = 1; i <= n; ++i) {
    std::cin >> a[i];
  }

  for (int i = 1; i <= n; ++i) {
    std::cin >> s[i];
  }

  int ans = 0;
  int cnt, sum, pre;
  for (int i = 1; i <= n; ++i) {
    cnt = 0;
    sum = 0;
    pre = -1;
    for (int j = i; j <= n; ++j) {
      sum += s[j];

      if (a[j] <= pre || sum > k) {
        ans = std::max(ans, cnt);

        break;
      }

      ++cnt;

      pre = a[j];

      if (j == n) {
        ans = std::max(ans, cnt);
      }
    }
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}