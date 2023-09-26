#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, q;
int idx = 0;
std::vector<int> arr[N];
std::map<int, int> ref;

void solution() {
  std::cin >> n >> q;

  int x;
  for (int i = 1; i <= n; ++i) {
    std::cin >> x;

    if (!ref[x]) {
      ref[x] = ++idx;
    }

    arr[ref[x]].push_back(i);
  }

  int num, cnt;
  while (q--) {
    std::cin >> num >> cnt;

    if (cnt > arr[ref[num]].size()) {
      std::cout << -1 << std::endl;
    } else {
      std::cout << arr[ref[num]][cnt - 1] << std::endl;
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