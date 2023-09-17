#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;

int n;
int idx;
int h[N], val[N], nxt[N];

void insert(int x) {
  int k = (x % N + N) % N;
  val[idx] = x;

  nxt[idx] = h[k];
  h[k] = idx++;
}

bool find(int x) {
  int k = (x % N + N) % N;
  for (int i = h[k]; i != -1; i = nxt[i]) {
    if (val[i] == x) {
      return true;
    }
  }

  return false;
}

void solution() {
  std::cin >> n;

  memset(h, -1, sizeof h);

  int x;
  std::string op;
  while (n--) {
    std::cin >> op >> x;

    if (op == "I") {
      insert(x);
    } else {
      if (find(x)) {
        std::cout << "Yes" << std::endl;
      } else {
        std::cout << "No" << std::endl;
      }
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