#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    int ival = -1;
    int cnt = 0, max = 0;
    for (int i = 0; i < n; ++ i)
    {
        cin >> x;

        if (ival + 1 == x) ++ cnt;
        else cnt = 1;

        if (cnt > max) max = cnt;

        ival = x;
    }

    cout << max << endl;

    return 0;
}