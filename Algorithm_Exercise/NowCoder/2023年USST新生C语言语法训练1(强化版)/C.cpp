#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int s[N];

void solution() {
  std::cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    std::cin >> s[i];

    s[i] += s[i - 1];
  }

  int ans = 0;
  int i = 1, j = 1;
  while (i <= n) {
    int sum = s[i] - s[j - 1];
    if (sum > m) {
      j = i;

      ++ans;

      continue;
    }

    if (i == n) {
      ++ans;
    }

    ++i;
  }

  std::cout << ans << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}