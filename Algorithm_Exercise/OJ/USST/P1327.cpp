#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n;
char str[N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    str[i] = 'o';
  }

  str[1] = 'O';

  int a = 1;
  int b = 1;
  int idx = 1;
  while (idx <= n) {
    idx = a + b;
    str[idx] = 'O';

    a = b;
    b = idx;
  }

  for (int i = 1; i <= n; ++i) {
    std::cout << str[i];
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}