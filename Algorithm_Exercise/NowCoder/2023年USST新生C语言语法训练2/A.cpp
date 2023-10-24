#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e4 + 5;

int n;
bool flag;
std::vector<int> grd[N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    int a, b, g, k;
    std::cin >> a >> b >> g >> k;

    grd[i].push_back(a);
    grd[i].push_back(b);
    grd[i].push_back(a + g);
    grd[i].push_back(b + k);
  }

  int x, y;
  std::cin >> x >> y;
  for (int i = n; i >= 1; --i) {
    if (x >= grd[i][0] && y >= grd[i][1] && x <= grd[i][2] && y <= grd[i][3]) {
      flag = true;
      std::cout << i << "\n";

      break;
    }
  }

  if (!flag) {
    std::cout << -1 << "\n";
  }
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