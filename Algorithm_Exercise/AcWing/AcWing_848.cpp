#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int idx;
int h[N], val[N], nxt[N];
std::queue<int> q;
int res[N], deg[N];

void add(int x, int y) {
  val[idx] = y;

  nxt[idx] = h[x];
  h[x] = idx++;
}

void topsort() {
  for (int i = 1; i <= n; ++i) {
    if (!deg[i]) {
      q.push(i);
    }
  }

  int cnt = 0;
  while (!q.empty()) {
    int t = q.front();
    q.pop();

    res[cnt++] = t;

    for (int i = h[t]; i != -1; i = nxt[i]) {
      int j = val[i];
      --deg[j];
      if (!deg[j]) {
        q.push(j);
      }
    }
  }

  if (cnt == n) {
    for (int i = 0; i < n; ++i) {
      std::cout << res[i] << " ";
    }
    std::cout << std::endl;
  } else {
    std::cout << "-1" << std::endl;
  }
}

void solution() {
  std::cin >> n >> m;

  memset(h, -1, sizeof h);

  while (m--) {
    int a, b;
    std::cin >> a >> b;

    add(a, b);

    ++deg[b];
  }

  topsort();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}