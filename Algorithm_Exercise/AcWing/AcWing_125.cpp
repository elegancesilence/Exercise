#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 5e4 + 5;

int n;
std::vector<PII> arr;

bool cmp(PII x, PII y) { return x.first + x.second < y.first + y.second; }

void solution() {
  std::cin >> n;

  int w, s;
  for (int i = 1; i <= n; ++i) {
    std::cin >> w >> s;

    arr.push_back({w, s});
  }

  std::sort(arr.begin(), arr.end(), cmp);

  int sum = 0, ans = -1e9;
  for (int i = 0; i < arr.size(); ++i) {
    ans = std::max(ans, sum - arr[i].second);
    sum += arr[i].first;
  }

  std::cout << ans << "\n";
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
