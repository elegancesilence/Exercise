#include <iostream>
#include <cmath>

using namespace std;

bool check(int x)
{
    for (int i = 2; i <= sqrt(x); ++ i)
        if (x % i == 0) return false;
    return true;
}

int main()
{
    long long n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); ++ i)
        if (check(i))
            if (n % i == 0) 
            {
                cout << n / i << endl;

                break;
            }

    return 0;
}