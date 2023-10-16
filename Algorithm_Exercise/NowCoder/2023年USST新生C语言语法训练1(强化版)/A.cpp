#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int t, n;
std::set<int> set;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n;

    int x;
    for (int i = 0; i < n; ++i) {
      std::cin >> x;

      set.insert(x);
    }

    std::cout << set.size() << "\n";

    set.clear();
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}