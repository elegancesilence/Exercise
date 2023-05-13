#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin >> n;

    double l = -100, r = 100;
    while (r - l > 1e-8)
    {
        double m = (l + r) / 2;
        if (m * m * m >= n)
            r = m;
        else
            l = m;
    }

    cout.setf(ios::fixed);
    cout << setprecision(6) << l << endl;

    return 0;
}