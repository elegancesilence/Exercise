#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int N = 1e5 + 10;

int n;
int idx;
int son[N][26], cnt[N];
std::string str;

void insert(std::string& str) {
  int p = 0;
  for (int i = 0; i < str.size(); i++) {
    int u = str[i] - 'a';
    if (!son[p][u]) {
      son[p][u] = ++idx;
    }

    p = son[p][u];
  }

  ++cnt[p];
}

int query(std::string& str) {
  int p = 0;
  for (int i = 0; i < str.size(); i++) {
    int u = str[i] - 'a';
    if (!son[p][u]) {
      return 0;
    }

    p = son[p][u];
  }

  return cnt[p];
}

void solution() {
  std::cin >> n;

  std::string op;
  while (n--) {
    std::cin >> op >> str;

    if (op == "I") {
      insert(str);
    } else {
      std::cout << query(str) << std::endl;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}