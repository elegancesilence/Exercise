#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a, p;

int quickPow(int a, int k, int p) {
  int ans = 1;
  while (k) {
    if (k & 1) {
      ans = ans * a % p;
    }

    a = a * a % p;
    k >>= 1;
  }

  return ans;
}

void solution() {
  std::cin >> a >> p;

  if (a % p) {
    std::cout << quickPow(a, p - 2, p) << "\n";
  } else {
    std::cout << "impossible"
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