#include <iostream>

using namespace std;

int fee[12];

int main()
{
    for (int i = 0; i < 12; ++ i) cin >> fee[i];

    bool flag = true;
    int bg = 0, sum = 0;
    for (int i = 0; i < 12; ++ i)
    {
        bg += 300;

        bg -= fee[i];
        if (bg < 0) 
        {
            cout << "-" << i + 1 << endl;
            
            flag = false;
            
            break;
        }

        if (bg / 100 ) 
        {
            sum += bg / 100 * 100;

            bg %= 100;
        }
    }

    if (flag) cout << sum * 1.2 + bg << endl;

    return 0;
}