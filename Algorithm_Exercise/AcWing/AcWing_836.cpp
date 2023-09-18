#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e5 + 5;

int n, m;
int p[N];

int find(int x) {
  if (p[x] != x) {
    p[x] = find(p[x]);
  }

  return p[x];
}

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    p[i] = i;
  }

  int a, b;
  std::string op;
  while (m--) {
    std::cin >> op >> a >> b;

    if (op == "M") {
      p[find(a)] = find(b);
    } else {
      if (find(a) == find(b)) {
        std::cout << "Yes" << std::endl;
      } else {
        std::cout << "No" << std::endl;
      }
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}