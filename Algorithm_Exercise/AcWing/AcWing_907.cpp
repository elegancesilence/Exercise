#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
std::vector<PII> range;
bool flag;

void solution() {
  int st, ed;
  std::cin >> st >> ed;
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    int l, r;
    std::cin >> l >> r;

    range.push_back({l, r});
  }

  std::sort(range.begin(), range.end());

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int idx = i, maxR = -2e9;
    while (idx < n && range[idx].first <= st) {
      maxR = std::max(maxR, range[idx].second);

      ++idx;
    }

    if (maxR < st) {
      break;
    }

    ++ans;

    if (maxR >= ed) {
      flag = true;

      break;
    }

    st = maxR;
    i = idx - 1;
  }

  if (flag) {
    std::cout << ans << "\n";
  } else {
    std::cout << -1 << "\n";
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