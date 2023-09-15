#include <bits/stdc++.h>

const int N = 1e5 + 5;

int n, q;
int a[N], s[N];

int main() {
  std::cin >> n >> q;

  for (int i = 1; i <= n; ++i) {
    std::cin >> a[i];
  }

  for (int i = 1; i <= n; ++i) {
    s[i] = s[i - 1] + a[i];
  }

  int l, r;
  while (q--) {
    std::cin >> l >> r;

    std::cout << s[r] - s[l - 1] << std::endl;
  }

  return 0;
}