#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

bool judge(int x) {
  for (int i = 2; i <= x / i; ++i) {
    if (!(x % i)) {
      return false;
    }
  }

  return true;
}

void solution() {
  std::cin >> n;

  if (judge(n) && n != 1) {
    std::cout << "Yes"
              << "\n";
  } else {
    std::cout << "No"
              << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}