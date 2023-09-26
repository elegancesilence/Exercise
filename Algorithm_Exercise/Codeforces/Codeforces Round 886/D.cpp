#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int t, n, k;
int arr[N];

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }

    std::sort(arr, arr + n);

    int ans = -1;
    int cnt = 1;
    int pre = arr[0];
    for (int i = 1; i < n; ++i) {
      if (arr[i] - pre <= k) {
        ++cnt;
      } else {
        cnt = 1;
      }

      ans = std::max(ans, cnt);

      pre = arr[i];
    }

    if (cnt == n) {
      ans = n;
    }

    std::cout << n - ans << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}