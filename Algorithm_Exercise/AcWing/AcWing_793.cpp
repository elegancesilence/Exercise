#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

std::string a;
std::vector<int> A;
int b;

std::vector<int> high_Mul(std::vector<int>& A, int& b) {
  std::vector<int> C;

  int t = 0;
  for (int i = 0; i < A.size() || t; ++i) {
    if (i < A.size()) {
      t += A[i] * b;
    }

    C.push_back(t % 10);

    t /= 10;
  }

  while (C.size() > 1 && C.back() == 0) {
    C.pop_back();
  }

  return C;
}

int main() {
  std::cin >> a >> b;

  for (int i = a.size() - 1; i >= 0; --i) {
    A.push_back(a[i] - '0');
  }

  auto C = high_Mul(A, b);

  for (int i = C.size() - 1; i >= 0; --i) {
    std::cout << C[i];
  }
  puts(" ");

  return 0;
}