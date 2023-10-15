#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, t;
int m[N], cnt[2];

void solution() {
  std::cin >> n >> t;

  for (int i = 0; i < n; ++i) {
    std::cin >> m[i];
  }

  int o = t;
  int u = t;
  for (int i = 0; i < n; ++i) {
    if (o >= 0) {
      ++cnt[0];

      o -= m[i];
    }

    if (u >= 0) {
      ++cnt[1];

      u -= m[n - 1 - i];
    }
  }

  if (cnt[0] > cnt[1]) {
    std::cout << "Yan" << std::endl;
  } else if (cnt[0] < cnt[1]) {
    std::cout << "Nathan" << std::endl;
  } else {
    std::cout << "Empate" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}