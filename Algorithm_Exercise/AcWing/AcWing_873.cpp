#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  int ans = n;
  for (int i = 2; i * i <= n; ++i) {
    if (!(n % i)) {
      ans = ans / i * (i - 1);

      while (!(n % i)) {
        n /= i;
      }
    }
  }

  if (n > 1) {
    ans = ans / n * (n - 1);
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}