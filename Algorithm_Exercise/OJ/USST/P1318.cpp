#include <bits/stdc++.h>

using LL = long long;

const int N = 2e5 + 5;

int n;
int arr[N][2];
int cnt[2][2];

void solution() {
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 2; ++j) {
      std::cin >> arr[i][j];

      if (j == 0 && arr[i][j] == 0) {
        ++cnt[0][0];
      } else if (j == 0 && arr[i][j] == 1) {
        ++cnt[0][1];
      } else if (j == 1 && arr[i][j] == 0) {
        ++cnt[1][0];
      } else {
        ++cnt[1][1];
      }
    }
  }

  int ans = 0;
  ans += std::min(cnt[0][0], cnt[0][1]);
  ans += std::min(cnt[1][0], cnt[1][1]);

  std::cout << ans << std::endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}