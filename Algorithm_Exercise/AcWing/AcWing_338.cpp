#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a, b;

int dgt(int x) {
  int res = 0;
  while (x) {
    x /= 10;

    ++res;
  }

  return res;
}

int cnt(int n, int t) {
  int res = 0;
  int len = dgt(n);
  for (int i = 0; i < len; ++i) {
    int p = pow(10, i);
    int lft = n / p / 10, rgt = n % p, mid = n / p % 10;
    if (t) {
      res += lft * p;
    } else if (!t && lft) {
      res += (lft - 1) * p;
    }

    if ((mid > t) && (t || lft)) {
      res += p;
    }

    if ((mid == t) && (t || lft)) {
      res += rgt + 1;
    }
  }

  return res;
}

void solution() {
  while (std::cin >> a >> b, a || b) {
    if (a > b) {
      std::swap(a, b);
    }

    for (int i = 0; i <= 9; ++i) {
      std::cout << cnt(b, i) - cnt(a - 1, i) << " ";
    }
    std::cout << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  // std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}