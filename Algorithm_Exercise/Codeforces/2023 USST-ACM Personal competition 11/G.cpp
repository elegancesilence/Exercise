#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string str;
std::vector<char> stk;

void solution() {
  std::cin >> str;

  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == 'A') {
      stk.push_back(str[i]);
    }

    if (str[i] == 'B') {
      if (stk.empty()) {
        std::cout << "Nao" << std::endl;

        return;
      } else {
        stk.pop_back();
      }
    }
  }

  if (!stk.empty()) {
    std::cout << "Nao" << std::endl;
  } else {
    std::cout << "Sim" << std::endl;
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}