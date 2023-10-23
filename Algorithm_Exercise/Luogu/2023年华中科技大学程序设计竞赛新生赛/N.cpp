#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

char s, t;
std::vector<int> ans;

void solution() {
  std::cin >> s >> t;

  int sum = s - 'A' + t - 'A';
  if (sum == 0) {
    std::cout << 'A' << "\n";

    return;
  } else {
    while (sum) {
      ans.push_back(sum % 26);

      sum /= 26;
    }
  }

  if (sum) {
    ans.push_back(sum);
  }

  if (ans.size() > 1 && ans.back() == 0) {
    ans.pop_back();
  }

  for (int i = ans.size() - 1; i >= 0; --i) {
    std::cout << char('A' + ans[i]);
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  // std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}