#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int t, n, c;
int arr[N];

int binarysearch() {
  int l = 1, r = 1e9;

  while (l < r) {
    __int128 sum = 0;
    int mid = l + r >> 1;
    for (int i = 0; i < n; ++i) {
      sum += (__int128)(arr[i] + 2 * mid) * (arr[i] + 2 * mid);
    }

    if (sum >= c) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }

  return l;
}

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> c;

    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }

    int ans = binarysearch();

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