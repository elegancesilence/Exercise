#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  for (int i = 2; i <= n / i; ++i) {
    if (!(n % i)) {
      int cnt = 0;
      while (!(n % i)) {
        n /= i;

        ++cnt;
      }

      std::cout << i << " " << cnt << "\n";
    }
  }

  if (n > 1) {
    std::cout << n << " " << 1 << "\n";
  }
  std::cout << "\n";
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