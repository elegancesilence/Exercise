#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int x;

void solution() {
  std::cin >> x;

  int ans = -1;
  if (x == 7) {
    ans = 1;
  } else {
    ans = x + 1;
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}