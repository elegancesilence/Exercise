#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, n, k, x;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> k >> x;

    if (k > n || k > x + 1) {
      std::cout << -1 << std::endl;

      continue;
    }

    if (k == x) {
      std::cout << (k - 1) * k / 2 + (n - k) * (x - 1) << std::endl;
    } else {
      std::cout << (k - 1) * k / 2 + (n - k) * x << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}