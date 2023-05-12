#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    int flag = 1;
    int cnt = 0, res = 0;
    for (int i = 1; i <= k; ++ i)
    {
        res += flag;

        ++ cnt;
        
        if (cnt == flag)
        {
            ++ flag;
            cnt = 0;
        }
    } 

    cout << res << endl;

    return 0;
}