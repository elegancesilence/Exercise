#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d;
    cin >> d;
    d *= 10;

    int i = 0;
    double res = 0;
    while (d)
    {
        res += static_cast<int>(d) % 10 * pow(10, -i);
        d /= 10;
        ++i;
    }

    cout << res << endl;

    return 0;
}