#include <iostream>
#include <algorithm>

using namespace std;

int n;

void div_prime(int x)
{
    for (int i = 2; i <= x / i; ++i)
        if (x % i == 0)
        {
            int s = 0;
            while (x % i == 0)
            {
                x /= i;

                ++s;
            }

            cout << i << " " << s << endl;
        }

    if (x > 1)
        cout << x << " " << 1 << endl;

    puts(" ");
}

int main()
{
    cin >> n;

    int x;
    while (n--)
    {
        cin >> x;

        div_prime(x);
    }

    return 0;
}