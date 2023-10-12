#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, m;
std::string str[N];

void solution() {
  std::cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    std::cin >> str[i];
  }

  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (!(i % 2)) {
      for (int j = 0; j < m; ++j) {
        if (str[i][j] == '.') {
          ++cnt;

          ans = std::max(ans, cnt);
        } else if (str[i][j] == 'L') {
          cnt = 0;
        }
      }
    } else {
      for (int j = m - 1; j >= 0; --j) {
        if (str[i][j] == '.') {
          ++cnt;

          ans = std::max(ans, cnt);
        } else if (str[i][j] == 'L') {
          cnt = 0;
        }
      }
    }
  }

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}