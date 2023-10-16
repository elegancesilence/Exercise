#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const double eps = 1e-5;

double h, s, v, l, k, n;

void solution() {
  std::cin >> h >> s >> v >> l >> k >> n;

  double t = std::sqrt((h - k) / 5);
  double t2 = std::sqrt(h / 5);

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (i >= s - v * t2 - eps && i <= s + l - v * t + eps) {
      ++ans;
    }
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