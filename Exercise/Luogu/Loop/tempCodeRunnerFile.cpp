#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0, cnt = 0;
    for (int i = 2; i <= n; ++ i) 
    {
        bool flag = true;
        for (int j = pow(i, 0.5); j >= 2; -- j)
            if (i % j == 0) 
            {
                flag = false;
                
                break;
            }

        if (flag) 
        {
            res += i;

            if (res > n) 
            {
                cout << cnt << endl;

                break;
            }

            cout << i << endl;

            ++ cnt;
        }
        

    }


    return 0;
}