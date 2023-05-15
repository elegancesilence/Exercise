#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 1;
    while (n > 1) 
    {
        n /= 2;

        ++ cnt;
    }

    cout << cnt << endl;

    return 0;
}