#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;
int gd, sl, br;

void solution() {
  std::cin >> n;

  double x = floor(n * 0.1);
  double y = floor(n * 0.2);
  double z = floor(n * 0.3);

  double a = ceil(n * 0.1);
  double b = ceil(n * 0.2);
  double c = ceil(n * 0.3);

  gd = a - x;
  if (gd) {
    sl = b - y + gd;
  }

  if (sl) {
    br = c - z + sl;
  }

  std::cout << gd << " " << sl << " " << br << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}