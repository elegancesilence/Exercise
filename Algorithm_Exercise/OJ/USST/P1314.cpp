#include <bits/stdc++.h>

using LL = long long;

const int N = 1e5 + 5;

int n, k;
int arr[N];

void solution() {
  std::cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n);

  for (int i = 0; i < k; ++i) {
    if (arr[i] < 0) {
      arr[i] = -arr[i];
    }
  }

  LL ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += arr[i];
  }

  std::cout << ans << std::endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}