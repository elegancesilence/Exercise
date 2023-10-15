#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
int arr[N];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  int cnt = 1;
  int l = 0, r = n - 1;
  while (l < r) {
    int mid = l + r >> 1;
    if (mid >= n) {
      r = mid;
    } else {
      l = mid + 1;
    }

    ++cnt;
  }

  std::cout << cnt << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}