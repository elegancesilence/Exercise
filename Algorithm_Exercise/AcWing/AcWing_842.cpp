#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 10;

int n;
int path[N];
bool st[N];

void dfs(int u) {
  if (u == n) {
    for (int i = 0; i < n; ++i) {
      std::cout << path[i] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 1; i <= n; ++i) {
    if (!st[i]) {
      path[u] = i;
      st[i] = true;

      dfs(u + 1);

      st[i] = false;
    }
  }
}

void solution() {
  std::cin >> n;

  dfs(0);
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}