#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 0;
    int x = 1, y = 1;
    while (--n)
    {
        if (flag == 0)
        {
            ++x;

            flag = 1;
        }
        else if (flag == 1)
        {
            --x;
            ++y;

            if (x == 1)
                flag = 2;
        }
        else if (flag == 2)
        {
            ++y;

            flag = 3;
        }
        else if (flag == 3)
        {
            ++x;
            --y;

            if (y == 1)
                flag = 0;
        }
    }

    cout << y << "/" << x << endl;

    return 0;
}