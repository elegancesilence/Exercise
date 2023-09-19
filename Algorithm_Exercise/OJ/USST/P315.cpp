#include <bits/stdc++.h>

#define int long long

using LL = long long;

int n;

void solution() {
  std::cin >> n;

  for (int i = 2; i <= n; ++i) {
    bool flag = true;
    for (int j = 2; j <= i / j; ++j) {
      if (i % j == 0) {
        flag = false;

        continue;
      }
    }

    if (flag) {
      std::cout << i << std::endl;
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