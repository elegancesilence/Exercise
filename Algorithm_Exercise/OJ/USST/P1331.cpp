#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 5e2 + 5;

std::string ori, fak;
std::stack<char> stk;
std::vector<int> flag;

void solution() {
  std::cin >> ori >> fak;

  int idx = 0;
  std::string tmp('0', N);
  for (int i = 0; i < fak.size(); ++i) {
    if (fak[i] == '+') {
      break;
    }

    if (idx && fak[i] == '-') {
      --idx;
    }

    if (fak[i] != '-') {
      tmp[idx++] = fak[i];
    }
  }

  for (int i = 0; i < idx; ++i) {
    if (tmp[i] != ori[i]) {
      flag.push_back(i + 1);
    }
  }

  if (flag.size()) {
    if (flag.size() > 1) {
      std::cout << "NO"
                << "\n";
    } else {
      std::cout << "NO"
                << "\n"
                << flag[0] << "\n";
    }
  } else {
    std::cout << "YES"
              << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}