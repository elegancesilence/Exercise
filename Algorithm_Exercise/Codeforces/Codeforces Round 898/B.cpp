#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t, n;
int arr[10];

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }

    std::sort(arr, arr + n);

    arr[0] += 1;

    int ans = 1;
    for (int i = 0; i < n; ++i) {
      ans *= arr[i];
    }

    std::cout << ans << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}