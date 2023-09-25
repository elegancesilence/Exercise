#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int k;

void solution() {
  std::cin >> k;

  if (k < 60) {
    if (k < 10) {
      std::cout << "21"
                << ":"
                << "0" << k << std::endl;
    } else {
      std::cout << "21"
                << ":" << k << std::endl;
    }
  } else {
    k %= 60;
    if (k < 10) {
      std::cout << "22"
                << ":"
                << "0" << k << std::endl;
    } else {
      std::cout << "22"
                << ":" << k << std::endl;
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