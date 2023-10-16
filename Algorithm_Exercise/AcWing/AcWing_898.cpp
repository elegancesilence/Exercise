#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 5e2 + 5;
const int INF = 1e9;

int n;
int arr[N][N];
int f[N][N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cin >> arr[i][j];
    }
  }

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= i + 1; ++j) {
      f[i][j] = -INF;
    }
  }

  f[1][1] = arr[1][1];
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      f[i][j] = std::max(f[i - 1][j - 1] + arr[i][j], f[i - 1][j] + arr[i][j]);
    }
  }

  int ans = -INF;
  for (int i = 1; i <= n; ++i) {
    ans = std::max(ans, f[n][i]);
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