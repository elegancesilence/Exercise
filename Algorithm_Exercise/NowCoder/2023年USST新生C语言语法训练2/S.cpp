#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n;
int flag = 1;
int snk[N][N];

void solution() {
  std::cin >> n;

  int x = 1, y = 1;
  snk[x][y] = 1;
  for (int i = 2; i <= n * n; ++i) {
    if (x == 1 && y < n && flag == 1) {
      snk[x][++y] = i;

      flag = -1;
    } else if (y == 1 && x < n && flag == -1) {
      snk[++x][y] = i;

      flag = 1;
    } else if (x == n && flag == -1) {
      snk[x][++y] = i;

      flag = 1;
    } else if (y == n && flag == 1) {
      snk[++x][y] = i;

      flag = -1;
    } else if (flag == 1) {
      snk[--x][++y] = i;
    } else if (flag == -1) {
      snk[++x][--y] = i;
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      std::cout << snk[i][j] << " ";
    }
    std::cout << "\n";
  }
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