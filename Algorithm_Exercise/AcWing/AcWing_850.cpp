#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int n, m;
int dis[N];
bool st[N];
std::vector<PII> g[N];
std::priority_queue<PII, std::vector<PII>, std::greater<PII>> heap;

void dijkstra() {
  memset(dis, 0x3f, sizeof dis);
  dis[1] = 0;

  heap.push({0, 1});

  while (!heap.empty()) {
    auto t = heap.top();
    heap.pop();

    int vertex = t.second, distance = t.first;
    if (st[vertex]) {
      continue;
    }

    st[vertex] = true;

    for (int i = 0; i < g[vertex].size(); ++i) {
      int temp = g[vertex][i].first;
      if (dis[temp] > distance + g[vertex][i].second) {
        dis[temp] = distance + g[vertex][i].second;

        heap.push({dis[temp], temp});
      }
    }
  }

  if (dis[n] > 1e15) {
    std::cout << -1 << std::endl;
  } else {
    std::cout << dis[n] << std::endl;
  }
}

void solution() {
  std::cin >> n >> m;

  while (m--) {
    int x, y, w;
    std::cin >> x >> y >> w;

    g[x].push_back({y, w});
  }

  dijkstra();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}