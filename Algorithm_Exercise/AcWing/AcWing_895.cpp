#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n;
int arr[N];
int f[N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  for (int i = 1; i <= n; ++i) {
    f[i] = 1;
    for (int j = 1; j < i; ++j) {
      if (arr[j] < arr[i]) {
        f[i] = std::max(f[i], f[j] + 1);
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans = std::max(ans, f[i]);
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}