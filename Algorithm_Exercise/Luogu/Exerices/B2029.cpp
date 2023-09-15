#include <iostream>

using namespace std;

constexpr double PI = 3.14;
constexpr int ALL = 2e4;

int main()
{
    int h, r;
    cin >> h >> r;

    int cnt = 0;
    double sum = 0.0;
    while (ALL > sum)
    {
        sum += PI * r * r * h;
        ++cnt;
    }

    cout << cnt << endl;

    return 0;
}