#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e2 + 5;

int n, k, m;
std::queue<int> que;

void solution() {
  std::cin >> n >> k >> m;

  for (int i = 0; i < n; ++i) {
    que.push((i + k) % n);
  }

  while (que.size() > 1) {
    for (int i = 1; i <= m - 1; ++i) {
      int h = que.front();
      que.pop();
      que.push(h);
    }

    que.pop();
  }

  std::cout << que.front() << "\n";
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