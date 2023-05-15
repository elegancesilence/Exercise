#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    double s = 0, cnt = 0;
    while (s <= k)
    {
        ++ cnt;

        s += 1 / cnt;
    }

    cout << cnt << endl;

    return 0;
}