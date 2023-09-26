#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

void solution() {
  std::string str;
  std::cin >> str;

  std::vector<int> ans;
  for (int i = 0; i < str.size(); ++i) {
    ans.push_back(str[i] - '0');
  }

  while (ans.size() != 1) {
    int a = ans.back();
    ans.pop_back();

    int b = ans.back();
    ans.pop_back();

    int sum = a + b;
    if (sum > 9) {
      ans.push_back(sum / 10);
      ans.push_back(sum % 10);
    } else {
      ans.push_back(sum);
    }
  }

  std::cout << ans[0] << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}