#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e4 + 5;

int n;
std::vector<int> arr(N + 1);

void solution() {
  while (std::cin >> n) {
    for (int i = 1; i < n; ++i) {
      if (i % 7) {
        std::cout << i << " ";
      }
    }
    std::cout << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}