#include <iostream>
#include <vector>

using namespace std;

vector<int> num;

int main()
{
    int ival;
    while (cin >> ival)
    {
        if (ival == 0) break;

        num.push_back(ival);
    }

    for (int i = num.size() - 1; i >= 0; -- i) cout << num[i] << " ";

    return 0;
}