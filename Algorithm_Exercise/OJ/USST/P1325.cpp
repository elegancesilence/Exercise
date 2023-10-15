#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string str;

void solution() {
  std::cin >> str;

  for (int i = str.size() - 1; i >= 0; --i) {
    if ((str[i] - '0') % 2 == 0) {
      std::cout << "YES"
                << "\n";

      return;
    }
  }

  std::cout << "NO"
            << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}