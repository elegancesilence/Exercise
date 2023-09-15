#include <iostream>

using namespace std;

int main()
{
    double s;
    cin >> s;

    int cnt = 0;
    double step = 2, interval = 0.98;
    while (s >= 0)
    {
        s -= step;
        step *= interval;

        ++ cnt;
    }

    cout << cnt << endl;

    return 0;
}