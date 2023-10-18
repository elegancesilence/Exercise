#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n;
std::vector<PII> arr;

bool cmp(PII x, PII y) { return x.second < y.second; }

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    int l, r;
    std::cin >> l >> r;

    arr.push_back({l, r});
  }

  std::sort(arr.begin(), arr.end(), cmp);

  int res = 1;
  int ed = arr[0].second;
  for (int i = 1; i < n; ++i) {
    if (arr[i].first >= ed) {
      ed = arr[i].second;

      ++res;
    }
  }

  std::cout << res << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}