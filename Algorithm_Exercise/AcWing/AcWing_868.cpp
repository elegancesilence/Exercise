#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e6 + 5;

int n;
std::vector<int> primes;
bool st[N];

void getPrimes(int x) {
  for (int i = 2; i <= n; ++i) {
    if (!st[i]) {
      primes.push_back(i);
    }

    for (int j = 0; primes[j] * i <= n; ++j) {
      st[primes[j] * i] = true;

      if (!(i % primes[j])) {
        break;
      }
    }
  }
}

void solution() {
  std::cin >> n;

  getPrimes(n);

  std::cout << primes.size() << "\n";
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