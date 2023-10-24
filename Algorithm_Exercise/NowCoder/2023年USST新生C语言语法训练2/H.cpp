#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;
std::stack<int> stk;

void solution() {
  std::cin >> n;

  while (n) {
    stk.push(n % 10);

    n /= 10;
  }

  while (stk.size() > 1) {
    int x = stk.top();
    stk.pop();

    int y = stk.top();
    stk.pop();

    int sum = x + y;
    if (sum > 9) {
      stk.push(sum % 10);
      stk.push(sum / 10);
    } else {
      stk.push(sum);
    }
  }

  std::cout << stk.top() << "\n";
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