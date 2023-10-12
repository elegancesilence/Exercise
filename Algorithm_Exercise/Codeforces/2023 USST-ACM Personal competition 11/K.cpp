#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string str, ans;

void solution() {
  std::cin >> str;

  int cnt = 1;
  char pre = str[0];
  for (int i = 1; i < str.size(); ++i) {
    if (str[i] == pre) {
      ++cnt;
    } else {
      ans += pre;
      ans += std::to_string(cnt);

      pre = str[i];
      cnt = 1;
    }
  }

  ans += pre;
  ans += std::to_string(cnt);

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}