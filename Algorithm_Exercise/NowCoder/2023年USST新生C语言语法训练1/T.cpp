#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

std::string isbn;
std::vector<int> tmp;

void solution() {
  std::cin >> isbn;

  tmp.push_back(0);

  for (int i = 0; i < isbn.size() - 2; ++i) {
    if (isbn[i] == '-') {
      continue;
    }

    tmp.push_back(isbn[i] - '0');
  }

  int sum = 0;
  for (int i = 1; i <= tmp.size(); ++i) {
    sum += tmp[i] * i;
  }

  char flag;
  int res = sum % 11;
  if (res != 10) {
    flag = res + '0';
  } else {
    flag = 'X';
  }

  if (flag == isbn[isbn.size() - 1]) {
    std::cout << "Right"
              << "\n";
  } else {
    isbn[isbn.size() - 1] = flag;

    std::cout << isbn << "\n";
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}