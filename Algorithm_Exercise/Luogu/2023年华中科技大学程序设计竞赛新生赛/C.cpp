#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e6 + 5;

int n, ans = 1e9, cnt;
std::vector<int> arr(N + 1, -1);
bool flag;

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  int cnt = 0;
  if (n == 1) {
    std::cout << 0 << "\n";
  } else {
    int dir[2] = {1, -1};
    for (int i = 1; i <= n - 1; ++i) {
      for (int j = 0; j < 2; ++j) {
        if (arr[i] + dir[j] == arr[i + 1]) {
          flag = true;
        }
      }
      
      if (flag) {
        flag = false;

        continue;
      }

      ++cnt;
    }

    std::cout << cnt << "\n";
  }
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