#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e4 + 5, M = 2e3 + 5;

int n, m;
int v[N], w[N];
int f[M];

void solution() {
  std::cin >> n >> m;

  int cnt = 1;
  for (int i = 1; i <= n; ++i) {
    int a, b, s;
    std::cin >> a >> b >> s;

    int k = 1;
    while (k <= s) {
      v[cnt] = a * k;
      w[cnt] = b * k;

      s -= k;
      k *= 2;

      ++cnt;
    }

    if (s) {
      v[cnt] = a * s;
      w[cnt] = b * s;

      ++cnt;
    }
  }

  n = cnt;

  for (int i = 1; i <= n; ++i) {
    for (int j = m; j >= v[i]; --j) {
      f[j] = std::max(f[j], f[j - v[i]] + w[i]);
    }
  }

  std::cout << f[m] << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}