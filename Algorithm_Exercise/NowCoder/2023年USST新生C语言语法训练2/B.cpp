#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e8 + 5, M = 1e6 + 5;

int n, m;
int sub[N];

void insert(int l, int r, int x) {
  sub[l] -= x;
  sub[r + 1] += x;
}

void solution() {
  std::cin >> n >> m;

  int l, r;
  while (m--) {
    std::cin >> l >> r;

    insert(l, r, -1);
  }

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sub[i] += sub[i - 1];

    if (sub[i] == 0) ++sum;
  }

  std::cout << (sub[0] == 0 ? sum + 1 : sum) << std::endl;
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