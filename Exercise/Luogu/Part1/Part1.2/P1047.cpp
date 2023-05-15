#include <iostream>

using namespace std;

constexpr int N = 1e4 + 10;

int n, m;
int sub[N];

void insert(int l, int r, int x)
{
    sub[l] -= x;
    sub[r + 1] += x;
}

int main()
{
    cin >> n >> m;

    int l, r;
    while (m--)
    {
        cin >> l >> r;

        insert(l, r, -1);
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sub[i] += sub[i - 1];

        if (sub[i] == 0)
            ++sum;
    }

    cout << (sub[0] == 0 ? sum + 1 : sum) << endl;

    return 0;
}