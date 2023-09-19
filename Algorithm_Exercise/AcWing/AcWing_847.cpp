#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int idx;
int h[N], val[N], nxt[N];
int d[N];

void add(int x, int y) {
  val[idx] = y;

  nxt[idx] = h[x];
  h[x] = idx++;
}

int bfs() {
  std::queue<int> q;
  q.push(1);

  d[1] = 0;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int i = h[u]; i != -1; i = nxt[i]) {
      int t = val[i];
      if (d[t] == -1) {
        d[t] = d[u] + 1;

        q.push(t);
      }
    }
  }

  return d[n];
}

void solution() {
  std::cin >> n >> m;

  memset(h, -1, sizeof h);

  for (int i = 0; i < m; ++i) {
    int a, b;
    std::cin >> a >> b;

    add(a, b);
  }

  memset(d, -1, sizeof d);

  std::cout << bfs() << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}