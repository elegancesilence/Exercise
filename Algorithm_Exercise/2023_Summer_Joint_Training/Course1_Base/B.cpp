#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int a, b, base;
vector<int> A, B;

vector<int> Add(vector<int>& A, vector<int>& B, int base)
{
    vector<int> C;
    
    int t = 0;
    for (int i = 0; i < A.size(); ++ i)
    {
        t += A[i];

        if (i < B.size())
            t += B[i];

        C.push_back(t % base);
        t /= base;
    }

    if (t)
        C.push_back(t);

    return C;
}

int main()
{
    cin >> a >> b;

    while (a)
    {
        A.push_back(a % 10);
        base = max(base, a % 10 + 1);

        a /= 10;
    }

    while (b)
    {
        B.push_back(b % 10);
        base = max(base, b % 10 + 1);

        b /= 10;
    }

    auto C = (A.size() > B.size() ? Add(A, B, base) : Add(B, A, base));

    cout << C.size() << endl;

    return 0;
}