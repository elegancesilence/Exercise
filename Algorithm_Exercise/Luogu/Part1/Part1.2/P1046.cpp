#include <iostream>

using namespace std;

int iarr[10];

int main()
{
    for (int i = 0; i < 10; ++ i) cin >> iarr[i];

    int h;
    cin >> h;

    int cnt = 0;
    for (auto item : iarr)
        if (item <= h + 30)
            ++ cnt;

    cout << cnt << endl;

    return 0;
}