#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;

    int min = 10 + (s % v ? s / v + 1 : s / v);
    int hour = min / 60 + 1;
    if (8 - hour < 0)
        cout << setw(2) << setfill('0') << 24 - hour + 8 << ":" << setw(2) << 60 - min % 60 << endl;
    else
        cout << setw(2) << setfill('0') << 8 - hour << ":" << setw(2) << 60 - min % 60 << endl;

    return 0;
}