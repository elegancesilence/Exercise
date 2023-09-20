#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  int t;
  while (n--) {
    std::cin >> t;

    if (t % 2) {
      std::cout << (t / 2) * (t / 2 + 1) << std::endl;
    } else {
      std::cout << (t / 2) * (t / 2) << std::endl;
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