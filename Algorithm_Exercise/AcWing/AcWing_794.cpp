#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

std::string a;
std::vector<int> A;
int b;

std::vector<int> high_Div(std::vector<int>& A, int& b, int& r) {
  std::vector<int> C;

  r = 0;
  for (int i = A.size() - 1; i >= 0; --i) {
    r = r * 10 + A[i];

    C.push_back(r / b);

    r %= b;
  }

  reverse(C.begin(), C.end());

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

  int r = 0;
  auto C = high_Div(A, b, r);

  for (int i = C.size() - 1; i >= 0; --i) {
    std::cout << C[i];
  }
  puts(" ");

  std::cout << r << std::endl;

  return 0;
}