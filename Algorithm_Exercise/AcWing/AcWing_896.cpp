#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
std::vector<int> arr(N + 1), stk;

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  stk.push_back(arr[1]);

  for (int i = 2; i <= n; ++i) {
    if (arr[i] > stk.back()) {
      stk.push_back(arr[i]);
    } else {
      *std::lower_bound(stk.begin(), stk.end(), arr[i]) = arr[i];
    }
  }

  std::cout << stk.size() << "\n";
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