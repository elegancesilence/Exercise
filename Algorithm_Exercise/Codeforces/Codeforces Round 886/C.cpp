#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t;
char str[8][8];
std::vector<char> ans;

void solution() {
  std::cin >> t;

  while (t--) {
    ans.clear();
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        std::cin >> str[i][j];

        if (str[i][j] != '.') {
          ans.push_back(str[i][j]);
        }
      }
    }

    for (int i = 0; i < ans.size(); ++i) {
      std::cout << ans[i];
    }
    std::cout << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}