#include <bits/stdc++.h>

using LL = long long;
using PII = std::pair<int, int>;

const int N = 3e5 + 5;

int n, m;
int a[N], s[N];
std::vector<int> alls;
std::vector<PII> add, query;

int find(int x) {
  int l = 0, r = alls.size() - 1;
  while (l < r) {
    int mid = l + r >> 1;
    if (alls[mid] >= x) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }

  return r + 1;
}

void solution() {
  std::cin >> n >> m;

  int idx, val;
  for (int i = 0; i < n; ++i) {
    std::cin >> idx >> val;

    add.push_back({idx, val});

    alls.push_back(idx);
  }

  int l, r;
  for (int i = 0; i < m; ++i) {
    std::cin >> l >> r;

    query.push_back({l, r});

    alls.push_back(l);
    alls.push_back(r);
  }

  std::sort(alls.begin(), alls.end());
  alls.erase(std::unique(alls.begin(), alls.end()), alls.end());

  for (auto item : add) {
    int ref = find(item.first);
    a[ref] += item.second;
  }

  for (int i = 1; i <= alls.size(); ++i) {
    s[i] = s[i - 1] + a[i];
  }

  for (auto item : query) {
    int l = find(item.first);
    int r = find(item.second);

    std::cout << s[r] - s[l - 1] << std::endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}