#include <bits/stdc++.h>

using LL = long long;

void solve() {
  for (int i = 100; i <= 999; ++i) {
    int a = i % 10;
    int b = i / 10 % 10;
    int c = i / 100;

    if (a * a * a + b * b * b + c * c * c == i) {
      std::cout << i << std::endl;
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  solve();

  return 0;
}