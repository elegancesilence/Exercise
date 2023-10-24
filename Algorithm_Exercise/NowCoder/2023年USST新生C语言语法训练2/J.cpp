#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
std::string opt, name;

void solution() {
  std::cin >> n;

  int ans = 0;
  std::queue<std::string> que;
  std::map<std::string, bool> mp;
  for (int i = 1; i <= n; ++i) {
    std::cin >> opt >> name;

    if (opt == "in") {
      que.push(name);
      mp[name] = false;
    } else {
      while (mp[que.front()]) {
        que.pop();
      }

      if (name == que.front()) {
        que.pop();

        ++ans;
      } else {
        mp[name] = true;
      }
    }
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}