#include <iostream>
#include <cmath>

using namespace std;

bool check(int x)
{
	if ((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) return false;
	return true;
} 

bool cycle(int x)
{
    int temp = x, t = 0;
    while (temp)
    {
        t = t * 10 + temp % 10;
        
        temp /= 10;
    }

    if (t == x) return true;
    else return false;
}

bool prime(int x)
{
    for (int i = 2; i <= sqrt(x); ++ i)
        if (x % i == 0) return false;
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 == 0) ++ a;
    b = min(9999999, b);

    for (int i = a; i <= b; i += 2)
    {
        if (check(i))
            if (cycle(i))
                if (prime(i))
                    cout << i << endl;
    }

    return 0;
}