#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 5e2 + 5;
const int M = 1e4 + 5;

int n, m, k;
int dis[N], backup[N];
struct Edge {
  int x, y, w;
} edge[M];

void Bellman_Ford() {
  memset(dis, 0x3f, sizeof dis);
  dis[1] = 0;

  while (k--) {
    memcpy(backup, dis, sizeof dis);
    for (int i = 0; i < m; ++i) {
      int x = edge[i].x, y = edge[i].y, w = edge[i].w;
      dis[y] = std::min(dis[y], backup[x] + w);
    }
  }

  if (dis[n] > 1e15) {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << dis[n] << std::endl;
  }
}

void solution() {
  std::cin >> n >> m >> k;

  for (int i = 0; i < m; ++i) {
    int x, y, w;
    std::cin >> x >> y >> w;

    edge[i] = {x, y, w};
  }

  Bellman_Ford();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}