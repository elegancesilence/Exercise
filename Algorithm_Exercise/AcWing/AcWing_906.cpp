#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, l, r;
std::vector<PII> range;
std::priority_queue<int, std::vector<int>, std::greater<int>> heap;

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> l >> r;

    range.push_back({l, r});
  }

  std::sort(range.begin(), range.end());

  for (int i = 0; i < n; ++i) {
    if (heap.empty() || heap.top() >= range[i].first) {
      heap.push(range[i].second);
    } else {
      heap.pop();
      heap.push(range[i].second);
    }
  }

  std::cout << heap.size() << "\n";
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