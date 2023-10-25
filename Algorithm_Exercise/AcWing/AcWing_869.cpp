#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  std::vector<int> ans;
  for (int i = 1; i * i <= n; ++i) {
    if (!(n % i)) {
      ans.push_back(i);
      if (i != n / i) {
        ans.push_back(n / i);
      }
    }
  }

  std::sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); ++i) {
    std::cout << ans[i] << " ";
  }
  std::cout << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}