#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 15;
const int M = 1e3 + 5;

int n, m;
std::string str[M];
int f[N][N];

int editDistance(std::string a, std::string b) {
  int la = a.size() - 1;
  int lb = b.size() - 1;

  for (int i = 0; i <= la; ++i) {
    f[i][0] = i;
  }

  for (int i = 0; i <= lb; ++i) {
    f[0][i] = i;
  }

  for (int i = 1; i <= la; ++i) {
    for (int j = 1; j <= lb; ++j) {
      f[i][j] = std::min(f[i - 1][j], f[i][j - 1]) + 1;
      if (a[i] == b[j]) {
        f[i][j] = std::min(f[i][j], f[i - 1][j - 1]);
      } else {
        f[i][j] = std::min(f[i][j], f[i - 1][j - 1] + 1);
      }
    }
  }

  return f[la][lb];
}

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> str[i];

    str[i] = " " + str[i];
  }

  while (m--) {
    int limit;
    std::string s;
    std::cin >> s >> limit;

    s = " " + s;

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
      if (editDistance(str[i], s) <= limit) {
        ++cnt;
      }
    }

    std::cout << cnt << "\n";
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