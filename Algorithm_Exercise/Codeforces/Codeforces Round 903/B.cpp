#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int t;
std::vector<int> arr;

void solution() {
  std::cin >> t;

  while (t--) {
    bool flag = false;
    for (int i = 0; i < 3; ++i) {
      int x;
      std::cin >> x;

      arr.push_back(x);
    }

    std::sort(arr.begin(), arr.end());

    int i = 0;
    while (i < 3) {
      if (arr[0] == arr[arr.size() - 1]) {
        flag = true;

        std::cout << "Yes" << std::endl;

        arr.clear();

        break;
      }

      int tmp = arr[arr.size() - 1];
      arr[arr.size() - 1] = arr[0];
      arr.push_back(tmp - arr[0]);

      std::sort(arr.begin(), arr.end());

      ++i;
    }

    if (arr[0] == arr[arr.size() - 1]) {
      flag = true;

      std::cout << "Yes" << std::endl;
    }

    if (!flag && i == 3) {
      std::cout << "No" << std::endl;
    }

    arr.clear();
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}