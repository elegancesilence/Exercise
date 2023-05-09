#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2;
    printf("%.1lf", pow(p * (p - a) * (p - b) * (p - c), 0.5));

    return 0;
}