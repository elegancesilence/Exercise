#include <bits/stdc++.h>

using LL = long long;

const int N = 1e5 + 5;

int n;
int arr[N], cnt[N];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  int ans = 0;
  for (int i = 0, j = 0; i < n; ++i) {
    ++cnt[arr[i]];

    while (cnt[arr[i]] > 1) {
      --cnt[arr[j++]];
    }

    ans = std::max(ans, i - j + 1);
  }

  std::cout << ans << std::endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}