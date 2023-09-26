#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t;
int a, b, c;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> a >> b >> c;

    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << "No" << std::endl;
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