#include <bits/stdc++.h>

using LL = long long;

int n;

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << j << "*" << i << "=" << i * j << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}