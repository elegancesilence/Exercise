#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int t, n;
std::vector<int> arr(N + 1);

void solution() {
  std::cin >> t;

  while (t--) {
    std::cin >> n;

    arr[0] = 2;
    arr[1] = 3;
    for (int i = 2; i < n; ++i) {
      arr[i] = arr[i - 1] + 1;
      while (!((arr[i] * 3) % (arr[i - 2] + arr[i - 1]))) {
        ++arr[i];
      }
    }

    for (int i = 0; i < n; ++i) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}