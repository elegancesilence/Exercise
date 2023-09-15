#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;

int n;
std::vector<PII> segs;

std::vector<PII> merge(std::vector<PII>& segs) {
  std::vector<PII> res;

  int st = -2e9, ed = -2e9;
  for (auto seg : segs) {
    if (ed < seg.first) {
      if (st != -2e9) {
        res.push_back({st, ed});
      }

      st = seg.first, ed = seg.second;
    } else {
      ed = std::max(ed, seg.second);
    }
  }

  if (st != -2e9) {
    res.push_back({st, ed});
  }

  return res;
}

void solution() {
  std::cin >> n;

  int l, r;
  while (n--) {
    std::cin >> l >> r;

    segs.push_back({l, r});
  }

  std::sort(segs.begin(), segs.end());

  auto ans = merge(segs);

  std::cout << ans.size() << std::endl;
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}