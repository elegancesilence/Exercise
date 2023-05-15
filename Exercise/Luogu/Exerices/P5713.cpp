#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << (n * 5 < 11 + n * 3 ? "Local" : "Luogu") << endl;

    return 0;
}