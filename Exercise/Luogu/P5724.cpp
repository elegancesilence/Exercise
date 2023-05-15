#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int max = 0, min = 0xffffff;
    for (int i = 0; i < n; ++ i) 
    {
        cin >> x;

        if (x > max) max = x;
        if (x < min) min = x;
    }

    cout << max - min << endl;

    return 0;
}