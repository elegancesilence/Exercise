#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e2 + 5;

int n;
int arr[N];

void solution() { std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n, std::greater<int>());

  int x;
  std::cin >> x;

  for (int i = 0; i < n; ++i) {
    if (arr[i] == x) {
      std::cout << i + 1 << std::endl;

      break;
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