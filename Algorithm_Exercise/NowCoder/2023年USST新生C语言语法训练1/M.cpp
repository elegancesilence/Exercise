#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a, b, n;

void solution() {
  std::cin >> a >> b >> n;

  int min = std::abs(a) + std::abs(b);
  if (min > n || (n - min) % 2) {
    std::cout << "NO"
              << "\n";
  } else {
    std::cout << "YES"
              << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}