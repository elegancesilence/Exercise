#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 100 == 0)
        cout << (n % 400 == 0 ? 1 : 0);
    else if (n % 4 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}