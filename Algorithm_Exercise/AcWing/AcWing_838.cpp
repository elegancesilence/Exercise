#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e5 + 5;

int n, m;
int sz;
int h[N];

void down(int x) {
  int t = x;
  if (x * 2 <= sz && h[t] > h[x * 2]) {
    t = x * 2;
  }

  if (x * 2 + 1 <= sz && h[t] > h[x * 2 + 1]) {
    t = x * 2 + 1;
  }

  if (t != x) {
    std::swap(h[t], h[x]);

    down(t);
  }
}

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> h[i];
  }

  sz = n;

  for (int i = n / 2; i; --i) {
    down(i);
  }

  while (m--) {
    std::cout << h[1] << " ";

    h[1] = h[sz--];

    down(1);
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}