#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

void solution() {
  for (int i = 1; i < 10000; ++i) {
    std::string ans = std::to_string(i);
    std::string tmp = ans;
    std::reverse(tmp.begin(), tmp.end());

    if (ans == tmp) {
      std::cout << ans << " ";
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