#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    int sum = 0;
    while (n --)
    {
        if (x % 7 != 6 && x % 7 != 0) sum += 250;

        ++ x;
    }

    cout << sum << endl;

    return 0;
}