#include <bits/stdc++.h>

using LL = long long;

void solution() {
  int n;
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    int k = i;
    for (int j = 1; j <= n; ++j) {
      if (k < n) {
        std::cout << k << " ";
      } else {
        std::cout << n - k % n << " ";
      }

      ++k;
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