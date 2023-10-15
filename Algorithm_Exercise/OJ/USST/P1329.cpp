#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e3 + 5;

int n, t;
int arr[N];
int f[N];

void solution() {
  std::cin >> n >> t;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  f[0] = 1;
  for (int i = 1; i <= n; ++i) {
    for (int j = t; j >= arr[i]; --j) {
      f[j] += f[j - arr[i]];
    }
  }

  std::cout << f[t] << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}