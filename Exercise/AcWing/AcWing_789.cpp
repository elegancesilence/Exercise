#include <iostream>

using namespace std;

constexpr int N = 1e5 + 10;

int n;
int iarr[N];

int main()
{
    int q;
    cin >> n >> q;

    for (int i = 0; i < n; ++i)
        cin >> iarr[i];

    int x;
    int l, r;
    while (q--)
    {
        cin >> x;

        l = 0, r = n - 1;
        while (l < r)
        {
            int m = l + r >> 1;
            if (iarr[m] >= x)
                r = m;
            else
                l = m + 1;
        }

        if (x != iarr[l])
            cout << -1 << " " << -1 << endl;
        else
        {
            cout << l << " ";

            l = 0, r = n - 1;
            while (l < r)
            {
                int m = l + r + 1 >> 1;
                if (iarr[m] <= x)
                    l = m;
                else
                    r = m - 1;
            }

            cout << l << endl;
        }
    }

    return 0;
}