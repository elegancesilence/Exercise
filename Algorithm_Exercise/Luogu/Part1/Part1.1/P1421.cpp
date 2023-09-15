#include <iostream>

using namespace std;

constexpr int pri = 19;

int main()
{
    int a, b;
    cin >> a >> b;

    int res = (a * 10 + b) / pri;
    cout << res << endl;

    return 0;
}