#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, n, m;
std::string x, s;

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> m >> x >> s;

    int ans = 0;
    int cnt = 0;
    bool flag = false;
    while (1) {
      if (x.size() < s.size()) {
        x += x;

        ++ans;
      } else {
        for (int i = 0; i < x.size(); ++i) {
          std::string tmp = x.substr(i, s.size());
          if (tmp == s) {
            flag = true;

            break;
          }
        }

        if (flag) {
          std::cout << ans << std::endl;

          break;
        }

        if (!flag && cnt) {
          std::cout << -1 << std::endl;

          break;
        }

        if (cnt == 0 && !flag) {
          x += x;

          ++ans;
          ++cnt;
        }
      }
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