#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 25;

int n;
std::string str[N];

bool cmp(std::string x, std::string y) { return x + y > y + x; }

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> str[i];
  }

  std::sort(str + 1, str + n + 1, cmp);

  for (int i = 1; i <= n; ++i) {
    std::cout << str[i];
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