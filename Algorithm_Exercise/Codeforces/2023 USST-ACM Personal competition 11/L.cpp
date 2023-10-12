#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
int idx = 0;
int arr[N];
std::map<int, PII> ref;

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];

    if (!ref[arr[i]].second) {
      ref[arr[i]] = {++idx, 1};
    } else {
      ++ref[arr[i]].second;
    }
  }

  std::sort(arr, arr + n);

  if (ref[arr[n - 1]].second == 1) {
    std::cout << ref[arr[n - 1]].first << std::endl;
  } else {
    std::cout << "-1" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}