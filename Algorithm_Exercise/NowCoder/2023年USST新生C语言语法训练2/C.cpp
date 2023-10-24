#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int st[26];
std::string str;

void solution() {
  std::cin >> str;

  int ans = 1e9, cnt = 0;
  for (int i = 0; i < str.size(); ++i) {
    if (!st[str[i] - 'a']) {
      ++st[str[i] - 'a'];

      ++cnt;
    }
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