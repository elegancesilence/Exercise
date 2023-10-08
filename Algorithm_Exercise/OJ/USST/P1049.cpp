#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int n;
int ans;
int arr[N];

void solution() {
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> arr[i];
  }

  int l = 0, r = n + 1;
  int op = 0, ed = 0;
  while (l < r) {
    if (op < ed) {
      op += arr[++l];
    } else if (op > ed) {
      ed += arr[--r];
    } else {
      ans = op;

      op += arr[++l];
      ed += arr[--r];
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