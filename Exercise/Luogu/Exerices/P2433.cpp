#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

constexpr double PI = 3.141593;

int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        int a = 14 / 4;
        cout << a << endl;
        cout << a * 4 << endl;
        cout << 14 - a * 4 << endl;
    }
    else if (T == 4)
    {
        cout << fixed << setprecision(3) << 1.0 * 500 / 3 << endl;
    }
    else if (T == 5)
    {
        cout << (220 + 260) / (20 + 12) << endl;
    }
    else if (T == 6)
    {
        cout << pow(6 * 6 + 9 * 9, 0.5) << endl;
    }
    else if (T == 7)
    {
        cout << 100 + 10 << "\n"
            << 110 - 20 << "\n"
            << 0 << endl;
    }
    else if (T == 8)
    {
        cout << PI * 10 << "\n"
             << PI * 25 << "\n"
             << 1.0 * 4 / 3 * PI * 125 << endl;
    }
    else if (T == 9)
    {
        cout << ((((1 + 1) * 2 + 1) * 2) + 1) * 2 << endl;
    }
    else if (T == 10)
    {
        cout << 9 << endl;
    }
    else if (T == 11)
    {
        cout << 1.0 * 100 / 3 << endl;
    }
    else if (T == 12)
    {
        cout << (int)('M' - 'A') + 1 << endl
            << (char)(18 + 'A' - 1) << endl;
    }
    else if (T == 13)
    {
        int r1 = 4, r2 = 10;
        double v = 4.0 / 3 * PI * r1 * r1 * r1 + 4.0 / 3 * PI * r2 * r2 * r2;
        v = pow(v, 1.0 / 3);
        printf("%.0lf\n", v);
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }

    return 0;
}