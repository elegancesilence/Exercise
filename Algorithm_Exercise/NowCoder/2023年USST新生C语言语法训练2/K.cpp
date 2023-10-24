#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e4 + 5;

int n;
std::priority_queue<int, std::vector<int>, std::greater<int>> heap;

void solution() {
  std::cin >> n;

  int x;
  for (int i = 1; i <= n; ++i) {
    std::cin >> x;

    heap.push(x);
  }

  int ans = 0;
  while (heap.size() > 1) {
    int x = heap.top();
    heap.pop();

    int y = heap.top();
    heap.pop();

    ans += x + y;
    heap.push(x + y);
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