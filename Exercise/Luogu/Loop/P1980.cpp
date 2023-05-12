#include <iostream>

using namespace std;

int cnt = 0;

void M_cnt(int x, int y)
{
    while (x)
    {
        if (x % 10 == y) ++ cnt;
        x /= 10;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; ++ i) M_cnt(i, x);

    cout << cnt << endl;

    return 0;
}