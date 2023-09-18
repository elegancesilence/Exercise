#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;
int t, x, y;
int crime[2][2];

void solution() {
  std::cin >> n;

  while (n--) {
    std::cin >> t >> x >> y;

    crime[t - 1][0] += x;
    crime[t - 1][1] += y;
  }

  if (crime[0][0] >= crime[0][1]) {
    std::cout << "LIVE" << std::endl;
  } else {
    std::cout << "DEAD" << std::endl;
  }

  if (crime[1][0] >= crime[1][1]) {
    std::cout << "LIVE" << std::endl;
  } else {
    std::cout << "DEAD" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}