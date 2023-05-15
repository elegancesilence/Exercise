#include <iostream>
#include <algorithm>

using namespace std;

int iarr[3];

int M_gcd(int x, int y)
{
    while (x)
    {
        int t = y % x;
        y = x;
        x = t;
    }

    return y;
}

int main()
{
    for (int i = 0; i < 3; ++ i) cin >> iarr[i];

    sort(iarr, iarr + 3);

    int r = M_gcd(iarr[0], iarr[2]);

    cout << iarr[0] / r << "/" << iarr[2] / r << endl;

    return 0;
}