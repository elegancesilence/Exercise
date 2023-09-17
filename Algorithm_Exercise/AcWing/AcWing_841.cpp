#include <bits/stdc++.h>

#define int long long

using LL = long long;
using ULL = unsigned long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;
const int P = 131;

int n, m;
ULL h[N], p[N];
std::string str;

ULL query(int l, int r) { return h[r] - h[l - 1] * p[r - l + 1]; }

void solution() {
  std::cin >> n >> m;
  std::cin >> str;

  p[0] = 1;
  h[0] = 0;
  for (int i = 0; i < n; ++i) {
    p[i + 1] = p[i] * P;
    h[i + 1] = h[i] * P + str[i];
  }

  int l1, r1, l2, r2;
  while (m--) {
    std::cin >> l1 >> r1 >> l2 >> r2;

    if (query(l1, r1) == query(l2, r2)) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << "No" << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}