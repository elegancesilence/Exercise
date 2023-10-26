#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int exgcd(int a, int b, int& x, int& y) {
  if (!b) {
    x = 1;
    y = 0;

    return a;
  }

  int d = exgcd(b, a % b, y, x);
  y -= a / b * x;

  return d;
}

void solution() {
  int a, b, x, y;
  std::cin >> a >> b;

  exgcd(a, b, x, y);

  std::cout << x << " " << y << "\n";
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