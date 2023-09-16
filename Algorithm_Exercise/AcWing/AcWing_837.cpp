#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e5 + 5;

int n, m;
int p[N], sz[N];

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

    sz[i] = 1;
  }

  int a, b, x;
  std::string op;
  while (m--) {
    std::cin >> op;

    if (op == "C") {
      std::cin >> a >> b;

      if (find(a) == find(b)) {
        continue;
      }

      p[find(a)] = find(b);
      sz[find(b)] += sz[find(a)];
    } else if (op == "Q1") {
      std::cin >> a >> b;

      if (find(a) == find(b)) {
        std::cout << "Yes" << std::endl;
      } else {
        std::cout << "No" << std::endl;
      }
    } else {
      std::cin >> x;

      std::cout << sz[find(x)] << std::endl;
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