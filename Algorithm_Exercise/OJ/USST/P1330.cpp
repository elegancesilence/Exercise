#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int n, k;
std::vector<int> arr, a, b;

void solution() {
  std::cin >> n >> k;

  int x;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;

    arr.push_back(x);
  }

  std::sort(arr.begin(), arr.end());

  if (n == 1) {
    if (x % 2) {
      std::cout << 2 << " " << k << "\n";
    } else {
      std::cout << 1 << " " << k << "\n";
    }
  } else {
    a.push_back(1);
    b.push_back(2);

    for (int i = 0; i < n; ++i) {
      if (arr[i] % 2) {
        a.push_back(arr[i]);
      } else {
        b.push_back(arr[i]);
      }
    }

    a.push_back(2 * k - 1);
    b.push_back(2 * k);

    int l;
    int max = -1;
    int tmp;
    for (int i = 0; i < a.size() - 1; ++i) {
      if (i == 0 || i == a.size() - 2) {
        tmp = (a[i + 1] - a[i]) / 2;
      } else {
        tmp = (a[i + 1] - a[i]) / 2 - 1;
      }

      if (max < tmp) {
        max = tmp;

        l = a[i] + 2;
      }
    }

    for (int i = 0; i < b.size() - 1; ++i) {
      if (i == 0 || i == b.size() - 2) {
        tmp = (b[i + 1] - b[i]) / 2;
      } else {
        tmp = (b[i + 1] - b[i]) / 2 - 1;
      }

      if (max < tmp) {
        max = tmp;

        l = b[i] + 2;
      }
    }

    std::cout << l << " " << max << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}