#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int a, b;

void solution() {
  std::cin >> a >> b;
  if (a == b) {
    std::cout << "Tacit！";
  } else {
    std::cout << "No Tacit!";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}