#include <bits/stdc++.h>

using LL = long long;

int n;

int lowbit(int x) { return x & (~x + 1); }

void solution() {
  std::cin >> n;

  int x;
  while (n--) {
    std::cin >> x;

    int ans = 0;
    while (x) {
      x -= lowbit(x);

      ++ans;
    }

    std::cout << ans << " ";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}