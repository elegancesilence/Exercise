#include <bits/stdc++.h>

using LL = long long;

const int N = 1e5 + 5;

int n;
int arr[N];
int flag[2];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];

    if (arr[i] == 5) {
      ++flag[0];
    } else if (arr[i] == 0) {
      ++flag[1];
    }
  }

  std::sort(arr, arr + n, std::greater<int>());

  if (flag[0] == 0 && flag[1] == 0) {
    std::cout << "-1" << std::endl;
  } else if (flag[0] != 0 && flag[1] == 0) {
    bool occur = false;
    for (int i = 0; i < n; ++i) {
      if (!occur && arr[i] == 5) {
        continue;
      }

      std::cout << arr[i];
    }

    std::cout << 5 << std::endl;
  } else {
    for (int i = 0; i < n; ++i) {
      std::cout << arr[i];
    }
    std::cout << std::endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}