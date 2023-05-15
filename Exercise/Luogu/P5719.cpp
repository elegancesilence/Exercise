#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    double a = 0, b = 0;
    int cnt_a = 0, cnt_b = 0;
    for (int i = 1; i <= n; ++ i)
    {
        if (!(i % k)) 
        {
            a += i;
            ++ cnt_a;
        }
        else
        {
            b += i;
            ++ cnt_b;
        }
    }

    printf("%.1lf %.1lf\n", a / cnt_a, b / cnt_b);

    return 0;
}