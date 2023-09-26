#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  while (n--) {
    std::string str(3, 0);
    std::cin >> str;

    if (str[0] == 'c' || str[2] == 'a') {
      if (str[0] == 'c' && str[2] == 'a') {
        std::cout << "YES" << std::endl;
      } else {
        std::cout << "NO" << std::endl;
      }
    } else {
      std::cout << "YES" << std::endl;
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