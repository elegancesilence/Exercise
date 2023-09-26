#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5, M = 2 * N;

struct Edge {
  bool operator<(const Edge& e) { return this->w < e.w; }

  int x, y, w;
};

int n, m;
int res = 0;
int cnt = 0;
int p[N];
Edge edges[M];

int find(int x) {
  if (p[x] != x) {
    p[x] = find(p[x]);
  }

  return p[x];
}

void kruskal() {
  for (int i = 0; i < m; ++i) {
    int px = find(edges[i].x);
    int py = find(edges[i].y);
    if (px != py) {
      p[px] = py;

      res += edges[i].w;
      ++cnt;
    }
  }
}

void solution() {
  std::cin >> n >> m;

  for (int i = 0; i < m; ++i) {
    int x, y, w;
    std::cin >> x >> y >> w;

    edges[i] = {x, y, w};
  }

  for (int i = 1; i <= n; ++i) {
    p[i] = i;
  }

  std::sort(edges, edges + m);

  kruskal();

  if (cnt < n - 1) {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << res << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}