#include <bits/stdc++.h>

using LL = long long;

void solution() {
  std::string x, y;
  std::cin >> x >> y;

  int ans = 0;
  for (int i = 0; i < std::min(x.size(), y.size()); ++i) {
    if (x.substr(0, i + 1) == y.substr(y.size() - i - 1, i + 1)) {
      ans = std::max(ans, i + 1);
    }
  }

  for (int i = 0; i < std::min(x.size(), y.size()); ++i) {
    if (y.substr(0, i + 1) == x.substr(x.size() - i - 1, i + 1)) {
      ans = std::max(ans, i + 1);
    }
  }

  std::cout << ans << std::endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}