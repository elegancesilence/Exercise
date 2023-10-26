#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e6 + 5;

int n;
int phi[N];
std::vector<int> primes;
bool st[N];

void solution() {
  std::cin >> n;

  phi[1] = 1;
  for (int i = 2; i <= n; ++i) {
    if (!st[i]) {
      phi[i] = i - 1;

      primes.push_back(i);
    }

    for (int j = 0; primes[j] * i <= n; ++j) {
      st[primes[j] * i] = true;

      if (!(i % primes[j])) {
        phi[primes[j] * i] = phi[i] * primes[j];

        break;
      }

      phi[primes[j] * i] = phi[i] * phi[primes[j]];
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans += phi[i];
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  //   std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}