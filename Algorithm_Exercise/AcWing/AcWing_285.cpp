#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 6e3 + 5;

int n;
int hap[N];
int f[N][2];
std::vector<int> tre[N + 1];
bool hasFather[N];

void dfs(int u) {
  f[u][1] = hap[u];
  for (int i = 0; i < tre[u].size(); ++i) {
    int tmp = tre[u][i];
    dfs(tmp);

    f[u][0] += std::max(f[tmp][0], f[tmp][1]);
    f[u][1] += f[tmp][0];
  }
}

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> hap[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    std::cin >> a >> b;

    tre[b].push_back(a);

    hasFather[a] = true;
  }

  int root = 1;
  while (hasFather[root]) {
    ++root;
  }

  dfs(root);

  std::cout << std::max(f[root][0], f[root][1]) << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  // std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}