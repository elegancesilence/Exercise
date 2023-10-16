#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

void solution() {
  int x;
  int pos = 0, neg = 0;
  for (int i = 1; i <= 10; ++i) {
    std::cin >> x;

    if (x > 0) {
      ++pos;
    }

    if (x < 0) {
      ++neg;
    }
  }

  std::cout << "positive:" << pos << "\n"
            << "negative:" << neg << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}