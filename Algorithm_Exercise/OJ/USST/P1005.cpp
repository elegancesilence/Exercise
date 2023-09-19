#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;
std::string str;

void solution() {
  std::cin >> n;
  std::cin >> str;

  str.erase(std::unique(str.begin(), str.end()), str.end());

  std::cout << str.size() << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}