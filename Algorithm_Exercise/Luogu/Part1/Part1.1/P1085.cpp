#include <iostream>

using namespace std;

int main()
{
    int x, y;

    int res, max = 0;
    for (int i = 1; i <= 7; ++ i)
    {
        cin >> x >> y;
        if (x + y > 8 && x + y > max) 
        {
            res = i; 
            max = x + y;
        }
    }

    cout << res << endl;

    return 0;
}