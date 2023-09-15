#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

std::string a, b;
std::vector<int> A, B;

bool cmp(std::vector<int>& A, std::vector<int>& B) {
  if (A.size() != B.size()) {
    return A.size() > B.size();
  } else {
    for (int i = A.size() - 1; i >= 0; --i) {
      if (A[i] != B[i]) {
        return A[i] > B[i];
      }
    }
  }

  return true;
}

std::vector<int> high_Sub(std::vector<int>& A, std::vector<int>& B) {
  std::vector<int> C;

  int t = 0;
  for (int i = 0; i < A.size(); ++i) {
    t = A[i] - t;

    if (i < B.size()) {
      t -= B[i];
    }

    C.push_back((t + 10) % 10);

    if (t < 0) {
      t = 1;
    } else {
      t = 0;
    }
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

  for (int i = b.size() - 1; i >= 0; --i) {
    B.push_back(b[i] - '0');
  }

  if (cmp(A, B)) {
    auto C = high_Sub(A, B);
    for (int i = C.size() - 1; i >= 0; --i) {
      std::cout << C[i];
    }
    puts(" ");
  } else {
    auto C = high_Sub(B, A);
    std::cout << "-";
    for (int i = C.size() - 1; i >= 0; --i) {
      std::cout << C[i];
    }
    puts(" ");
  }

  return 0;
}