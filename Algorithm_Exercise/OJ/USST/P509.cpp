#include <bits/stdc++.h>

using LL = long long;
using PII = std::pair<int, int>;

int n;
std::vector<PII> vec;

void solution() {
  std::cin >> n;

  int val;
  for (int i = 1; i <= n; ++i) {
    std::cin >> val;

    vec.push_back({val, i});
  }

  std::sort(vec.begin(), vec.end(), std::greater<PII>());

  std::cout << vec.front().first << " " << vec.front().second << std::endl;
  std::cout << vec.back().first << " " << vec.back().second << std::endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}