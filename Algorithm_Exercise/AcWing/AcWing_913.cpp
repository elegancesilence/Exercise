#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
int arr[N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr + 1, arr + n + 1);

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans += arr[i] * (n - i);
  }

  std::cout << ans << "\n";
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