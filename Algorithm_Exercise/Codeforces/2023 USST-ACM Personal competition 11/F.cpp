#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

double n, m, k;

void solution() {
  std::cin >> n >> m >> k;

  int target = ceil((long double)n * 0.7 - 1e-10) - k;
  if (n - m < target) {
    std::cout << "-1" << std::endl;
  } else if (target <= 0) {
    std::cout << 0 << std::endl;
  } else {
    std::cout << target << std::endl;
  }

  std::cout << floor((n - m + k) * (long double)100 / n) << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}