#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e4 + 5;

int t, n;
int ans[N];

void solution() {
  std::cin >> t;

  ans[0] = 1;
  for (int i = 1; i < 18257; ++i) {
    ans[i] = ans[i - 1] + 12 * i;
  }

    while (t--) {
      std::cin >> n;

      std::cout << ans[n - 1] << std::endl;
    }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}