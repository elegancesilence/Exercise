#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a[3], b[3];

void solution() {
  for (int i = 0; i < 3; ++i) {
    std::cin >> a[i];
  }

  for (int i = 0; i < 3; ++i) {
    std::cin >> b[i];
  }

  int ans = 0;
  for (int i = 0; i < 3; ++i) {
    ans += std::min(a[i], b[(i + 1) % 3]);
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