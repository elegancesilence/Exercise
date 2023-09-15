#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

std::string a, b;
std::vector<int> A, B;

std::vector<int> high_Add(std::vector<int>& A, std::vector<int>& B) {
  std::vector<int> C;

  int t = 0;
  for (int i = 0; i < A.size(); ++i) {
    t += A[i];

    if (i < B.size()) {
      t += B[i];
    }

    C.push_back(t % 10);

    t /= 10;
  }

  if (t) C.push_back(1);

  return C;
}

int main() {
  std::cin >> a >> b;

  for (int i = a.size() - 1; i >= 0; --i) {
    A.push_back(a[i] - '0');
  }

  for (int i = b.size() - 1; i >= 0; --i) {
    B.push_back(b[i] - '0');
  }

  auto C = (A.size() >= B.size() ? high_Add(A, B) : high_Add(B, A));

  for (int i = C.size() - 1; i >= 0; --i) {
    std::cout << C[i];
  }
  puts(" ");

  return 0;
}