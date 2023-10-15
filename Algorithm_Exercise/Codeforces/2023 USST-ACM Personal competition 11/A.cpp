#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, a, b;
std::vector<int> sub;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> a >> b;

    int res = std::__gcd(a, b);

    if (res > 1) {
      std::cout << "Sim" << std::endl;
    } else {
      std::cout << "Nao" << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}