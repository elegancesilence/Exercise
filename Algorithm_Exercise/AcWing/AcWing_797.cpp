#include <bits/stdc++.h>

using LL = long long;

const int N = 1e5 + 5;

int n, m;
int a[N], b[N];

void insert(int l, int r, int x) {
  b[l] += x;
  b[r + 1] -= x;
}

void solve() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> a[i];

    insert(i, i, a[i]);
  }

  int l, r, x;
  while (m--) {
    std::cin >> l >> r >> x;

    insert(l, r, x);
  }

  for (int i = 1; i <= n; ++i) {
    b[i] += b[i - 1];

    std::cout << b[i] << " ";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solve();

  return 0;
}