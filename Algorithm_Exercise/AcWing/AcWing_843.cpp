#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 15;

int n;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int y) {
  if (y == n) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        std::cout << g[i][j];
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }

  for (int x = 0; x < n; ++x) {
    if (!col[x] && !dg[y + x] && !udg[n - y + x]) {
      g[y][x] = 'Q';
      col[x] = dg[y + x] = udg[n - y + x] = true;

      dfs(y + 1);

      col[x] = dg[y + x] = udg[n - y + x] = false;
      g[y][x] = '.';
    }
  }
}

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      g[i][j] = '.';
    }
  }

  dfs(0);
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}