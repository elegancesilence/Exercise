#include <bits/stdc++.h>

#define int long long
using LL = long long;

int n;
std::priority_queue<int> lpq;
std::priority_queue<int, std::vector<int>, std::greater<int>> spq;

int calculate_Min(std::priority_queue<int> lpq) {
  int x, y;
  while (lpq.size() > 1) {
    x = lpq.top();
    lpq.pop();

    y = lpq.top();
    lpq.pop();

    lpq.push(x * y + 1);
  }

  return lpq.top();
}

int calculate_Max(
    std::priority_queue<int, std::vector<int>, std::greater<int>> spq) {
  int x, y;
  while (spq.size() > 1) {
    x = spq.top();
    spq.pop();

    y = spq.top();
    spq.pop();

    spq.push(x * y + 1);
  }

  return spq.top();
}

void solution() {
  std::cin >> n;

  int x;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;

    spq.push(x);
    lpq.push(x);
  }

  std::cout << calculate_Max(spq) << " " << calculate_Min(lpq) << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}