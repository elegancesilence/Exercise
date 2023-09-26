#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, n, k, x;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> k >> x;

    if ((n + n - k + 1) * k / 2 < x || (1 + k) * k / 2 > x) {
      std::cout << "No" << std::endl;
    } else {
      std::cout << "Yes" << std::endl;
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