#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int w;

void solution() {
  std::cin >> w;

  if (!(w % 2) && w != 2) {
    std::cout << "YES, you can divide the watermelon into two even parts.";
  } else {
    std::cout << "NO, you can't divide the watermelon into two even parts.";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}