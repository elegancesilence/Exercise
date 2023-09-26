#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

const int N = 15;

int t;
char g[N][N];

void solution() {
  std::cin >> t;

  while (t--) {
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        std::cin >> g[i][j];

        if ((i == 0 || i == 9 || j == 0 || j == 9) && g[i][j] == 'X') {
          ans += 1;
        } else if ((i == 1 || i == 8 || j == 1 || j == 8) && g[i][j] == 'X') {
          ans += 2;
        } else if ((i == 2 || i == 7 || j == 2 || j == 7) && g[i][j] == 'X') {
          ans += 3;
        } else if ((i == 3 || i == 6 || j == 3 || j == 6) && g[i][j] == 'X') {
          ans += 4;
        } else if ((i == 4 || i == 5 || j == 4 || j == 5) && g[i][j] == 'X') {
          ans += 5;
        }
      }
    }
    std::cout << ans << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}