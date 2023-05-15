#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = n; i > 0; -- i)
    {
        for (int j = 0; j < i; ++ j)
        {
            cout << setw(2) << setfill('0') << ++ cnt << "";
        }

        puts(" ");
    }
}