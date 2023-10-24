#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int path[15];
bool flag[15];

void dfs(int n) {
  if (n == 8) {
    for (int i = 0; i < n; ++i) {
      std::cout << path[i] << " ";
    }
    std::cout << "\n";
  }

  for (int i = 1; i <= 8; ++i) {
    if (!flag[i]) {
      path[n] = i;
      flag[i] = true;

      dfs(n + 1);

      flag[i] = false;
    }
  }
}

void solution() { dfs(0); }

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