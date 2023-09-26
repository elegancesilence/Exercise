#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string str;

void solution() {
  std::cin >> str;

  int i = -1, j = str.size();
  while (i < j) {
    do {
      ++i;
    } while (i < str.size() && str[i] != 'C');

    do {
      --j;
    } while (j >= 0 && str[j] != 'A');

    if (i < j) {
      std::swap(str[i], str[j]);
    }
  }

  int ans = 0;
  int a = 0, b = 0;
  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == 'A') {
      ++a;
    } else if (str[i] == 'B') {
      ++b;

      b = std::min(a, b);
    } else {
      if (a && b) {
        --a;
        --b;

        ++ans;
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