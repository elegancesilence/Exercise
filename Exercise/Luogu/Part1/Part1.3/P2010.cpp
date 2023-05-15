#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int year_check(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

int date_check(int x)
{
    int year = x / 10000, month = (x / 100) % 100, day = x % 100;
    if (month == 0 || month > 12)
        return 0;
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return 0;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return 0;

    if (!year_check(year) && month == 2 && day > 28)
        return 0;
    else if (year_check(year) && month == 2 && day > 29)
        return 0;

    return 1;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int cnt = 0;
    int x1 = x / 10000, y1 = y / 10000;
    for (int i = x1; i <= y1; ++i)
    {
        int n = i * 10000 + i % 10 * 1000 + i % 100 / 10 * 100 + i % 1000 / 100 * 10 + i / 1000;
        if (date_check(n) && n >= x && n <= y)
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}