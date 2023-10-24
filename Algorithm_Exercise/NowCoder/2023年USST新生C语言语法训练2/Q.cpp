#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;
const int N = 25;

int a, b;
std::vector<int> A, B;

std::vector<int> myAdd(std::vector<int>& A, std::vector<int>& B) {
  std::vector<int> C;

  int t = 0;
  for (int i = 0; i < A.size(); ++i) {
    t += A[i];
    if (i < B.size()) {
      t += B[i];
    }

    C.push_back(t);
    t = 0;
  }

  return C;
}

void solution() {
  std::cin >> a >> b;

  while (a) {
    A.push_back(a % 2);

    a /= 2;
  }

  while (b) {
    B.push_back(b % 2);

    b /= 2;
  }

  auto C = (A.size() > B.size() ? myAdd(A, B) : myAdd(B, A));

  for (int i = C.size() - 1; i >= 0; --i) {
    std::cout << C[i];
  }
  std::cout << "\n";
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t = 1;
  // std::cin >> t;

  while (t--) {
    solution();
  }

  return 0;
}