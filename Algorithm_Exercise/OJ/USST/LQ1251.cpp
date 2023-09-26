#include <bits/stdc++.h>

using LL = long long;

const int N = 2e2 + 5;

void solution() {
  int n;
  int arr[N];

  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n, std::greater<int>());

  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}