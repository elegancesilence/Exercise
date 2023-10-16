#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n, a, b;

void solution() {
  std::cin >> n >> a >> b;

  int ans = 0;
  for (int i = 0; i <= b; ++i) {
    if (n - 1 - i < a) {
      break;
    }

    ++ans;
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