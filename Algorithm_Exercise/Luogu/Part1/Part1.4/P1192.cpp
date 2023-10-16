#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e5 + 3;
const int N = 1e5 + 5;

int n, k;
int f[N];

void solution() {
  std::cin >> n >> k;

  f[0] = f[1] = 1;
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (i >= j) {
        f[i] = (f[i] + f[i - j]) % MOD;
      }
    }
  }

  std::cout << (f[n] + MOD) % MOD << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}