#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string str;

void solution() {
  std::cin >> str;

  int i = 1;
  char pre = str[0];
  while (i < str.size()) {
    if (pre == 'a' && str[i] != 'b') {
      std::cout << "No" << std::endl;

      break;
    } else if (pre == 'b' && str[i] != 'c') {
      std::cout << "No" << std::endl;

      break;
    } else if (pre == 'c' && str[i] != 'a') {
      std::cout << "No" << std::endl;

      break;
    }

    pre = str[i];

    ++i;
  }

  if (i == str.size()) {
    std::cout << "Yes" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}