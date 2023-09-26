#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int dis[N], cnt[N];
bool st[N];
std::queue<int> q;
std::vector<PII> g[N];

bool spfa() {
  for (int i = 1; i <= n; ++i) {
    q.push(i);

    st[i] = true;
  }

  while (!q.empty()) {
    int t = q.front();
    q.pop();

    st[t] = false;

    for (int i = 0; i < g[t].size(); ++i) {
      int temp = g[t][i].first;
      if (dis[temp] > dis[t] + g[t][i].second) {
        dis[temp] = dis[t] + g[t][i].second;
        cnt[temp] = cnt[t] + 1;

        if (!st[temp]) {
          q.push(temp);

          st[temp] = true;
        }

        if (cnt[temp] >= n) {
          return true;
        }
      }
    }
  }

  return false;
}

void solution() {
  std::cin >> n >> m;

  while (m--) {
    int x, y, w;
    std::cin >> x >> y >> w;

    g[x].push_back({y, w});
  }

  if (spfa()) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}