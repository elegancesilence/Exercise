#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, n;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n;

    std::string ans;
    if (n % 2) {
      ans += "7";

      n -= 3;
    }

    while (n) {
      ans += "1";

      n -= 2;
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