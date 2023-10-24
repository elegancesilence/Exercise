#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, a, b;
std::vector<PII> arr;

bool cmp(PII x, PII y) { return x.second < y.second; }

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> a >> b;

    arr.push_back({a, b});
  }

  std::sort(arr.begin(), arr.end(), cmp);

  int cnt = 0, tmp = -1e15;
  for (int i = 0; i < arr.size(); ++i) {
    if (tmp < arr[i].first) {
      tmp = arr[i].second;

      ++cnt;
    }
  }

  std::cout << cnt << "\n";
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