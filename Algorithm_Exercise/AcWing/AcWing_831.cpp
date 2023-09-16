#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e5 + 5;

int n, m;
int nxt[N];
std::string p, s;

void solution() {
  std::cin >> n >> p >> m >> s;

  nxt[0] = -1;
  for (int i = 1, j = -1; i < n; ++i) {
    while (j != -1 && p[j + 1] != p[i]) {
      j = nxt[j];
    }

    if (p[j + 1] == p[i]) {
      ++j;
    }

    nxt[i] = j;
  }

  for (int i = 0, j = -1; i < m; ++i) {
    while (j != -1 && p[j + 1] != s[i]) {
      j = nxt[j];
    }

    if (p[j + 1] == s[i]) {
      ++j;
    }

    if (j == n - 1) {
      std::cout << i - n + 1 << " ";

      j = nxt[j];
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