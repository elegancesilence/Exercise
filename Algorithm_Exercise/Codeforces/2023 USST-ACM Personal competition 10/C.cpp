#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

const int N = 1e6 + 5;

int n;
int arr[N];

void solution() { std::cin >> n;

  for (int i = n - 1; i > 0; --i) {
    std::cout << i << " ";
  }

  std::cout << n << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}