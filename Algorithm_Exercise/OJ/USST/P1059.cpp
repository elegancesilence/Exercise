#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  int ans = n % 10 + n / 10;

  int cnt = 1, t = n;
  while (t > 10) {
    t /= 10;

    cnt *= 10;
  }

  if (n % cnt + n / cnt > ans) {
    ans = n % cnt + n / cnt;
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