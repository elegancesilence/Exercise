#include <bits/stdc++.h>

#define int long long

using LL = long long;

int n;

void solution() {
  std::cin >> n;

  int cnt = 0;
  int mny = 1, ans = 0;
  while (n--) {
    if (cnt >= mny) {
      cnt = 0;

      ++mny;
    }

    ans += mny;

    ++cnt;
  }

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}