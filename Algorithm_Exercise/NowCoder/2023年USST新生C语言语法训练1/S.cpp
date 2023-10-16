#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int x, y;

void solution() {
  int ans = 0;
  int max = -1;
  for (int i = 0; i < 7; ++i) {
    std::cin >> x >> y;

    if (x + y > 8 && x + y > max) {
      ans = i + 1;
      max = x + y;
    }
  }

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}