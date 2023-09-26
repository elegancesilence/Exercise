#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, m;
std::vector<int> a(N + 1), b(N + 1);

void solution() {
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  std::cin >> m;
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }

  int ans = 1e9;
  for (int i = 0; i < m - n + 1; ++i) {
    int res = 0;
    for (int j = 0, k = i; j < n; ++j, ++k) {
      res += pow(a[j] - b[k], 2);
    }
    
    if (ans > res) {
      ans = res;
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