#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

unsigned int x;

int main()
{
    cin >> x;

    cout << (x >> 16) + (x << 16) << endl;

    return 0;
}