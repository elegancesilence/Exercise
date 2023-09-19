#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5, M = 2 * N;

int n;
int idx;
int h[N], val[M], nxt[M];
bool st[N];

int ans = 0x3f3f3f3f;

void add(int a, int b) {
  val[idx] = b;

  nxt[idx] = h[a];
  h[a] = idx++;
}

int dfs(int u) {
  st[u] = true;

  int sum = 1, res = 0;
  for (int i = h[u]; i != -1; i = nxt[i]) {
    int t = val[i];
    if (!st[t]) {
      int cnt = dfs(t);
      res = std::max(res, cnt);
      sum += cnt;
    }
  }

  res = std::max(res, n - sum);
  ans = std::min(ans, res);

  return sum;
}

void solution() {
  std::cin >> n;

  memset(h, -1, sizeof h);

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    std::cin >> a >> b;

    add(a, b);
    add(b, a);
  }

  dfs(1);

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}