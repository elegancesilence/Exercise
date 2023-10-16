#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a, b, n;
std::vector<int> arr;

void solution() {
  std::cin >> a >> b >> n;

  arr.push_back(a);
  arr.push_back(b);

  int d = b - a;
  int cnt = n - 2;
  while (cnt--) {
    arr.push_back(b + d);

    a += d;
    b += d;
  }

  std::cout << n * arr[0] + (n*(n - 1) / 2) * d << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}