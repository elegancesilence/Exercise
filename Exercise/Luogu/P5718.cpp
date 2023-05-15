#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, min = 0xffffff;
    while (n --)
    {
        cin >> x;
        if (x < min) min = x;
    }

    cout << min << endl;

    return 0;
}