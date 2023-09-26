#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5;

int t, n, k;
std::vector<int> arr(N + 1);

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n >> k;

    bool flag = false;
    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];

      if (arr[i] == k) {
        flag = true;
      }
    }

    if (flag) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << "No" << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}