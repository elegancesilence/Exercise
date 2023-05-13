#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int week = n / 52;
    for (int i = min(week / 7 - 1, 100); i >= 1; -- i)
    {
        if ((week - i * 7) % 21 == 0)
        {
            cout << i << "\n" << (week - i * 7) / 21 << endl;

            break;
        } 

    }
}