#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, m;
int v[N], w[N];
int f[N];

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> v[i] >> w[i];
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = v[i]; j <= m; ++j) {
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