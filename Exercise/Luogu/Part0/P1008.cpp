#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool a[10];

int main()
{
    int i, j;
    for (i = 192; i <= 327; ++i)
    {
        memset(a, 0, sizeof(a));

        a[i % 10] = a[i / 10 % 10] = a[i / 100] = a[i * 2 % 10] = a[i * 2 / 10 % 10] = a[i * 2 / 100] = a[i * 3 % 10] = a[i * 3 / 10 % 10] = a[i * 3 / 100] = 1;

        int v = 0;
        for (j = 1; j <= 9; ++j)
            v += a[j];

        if (v == 9)
            cout << i << " " << i * 2 << " " << i * 3 << endl;
    }

    return 0;
}