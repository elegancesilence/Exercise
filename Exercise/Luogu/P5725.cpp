#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 1; i <= n; ++ i)
    {
        for (int j = 1; j <= n; ++ j)
        {
            cout << setw(2) << setfill('0') << cnt;

            ++ cnt;
        }

        puts(" ");
    }
    
    puts(" ");

    cnt = 1;
    for (int i = 1; i <= n; ++ i)
    {
        for (int j = n - i; j > 0; -- j) cout << "  ";

        for (int j = 1; j <= i; ++ j)
        {
            cout << setw(2) << setfill('0') << cnt;

            ++ cnt;
        }

        puts(" ");
    }

    return 0;
}