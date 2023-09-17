#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, a, b;
bool flag[N];

void solution() {
  std::cin >> n >> b;

  while (n--) {
    std::cin >> a;

    flag[a] = true;
  }

  int ans;
  int min = 0x3f3f3f3f;
  for (int i = 0; i <= 1e5 + 1; ++i) {
    if (!flag[i] && min > std::abs(b - i)) {
      min = std::abs(b - i);

      ans = i;
    }
  }

  std::cout << ans << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}