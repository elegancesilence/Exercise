#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;
std::unordered_map<int, int> primes;

void solution() {
  std::cin >> n;

  for (int i = 2; i * i <= n; ++i) {
    while (!(n % i)) {
      ++primes[i];

      n /= i;
    }
  }

  if (n > 1) {
    ++primes[n];
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

  int ans = 1;
  for (auto prime : primes) {
    int x = prime.first, y = prime.second;

    int tmp = 1;
    while (y--) {
      tmp = (tmp * x + 1) % MOD;
    }

    ans = ans * tmp % MOD;
  }

  std::cout << ans << "\n";

  return 0;
}