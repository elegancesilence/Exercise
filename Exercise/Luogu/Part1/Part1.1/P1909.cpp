#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> price;

int main()
{
    int x;
    cin >> x;

    int n, m;
    for (int i = 0; i < 3; ++ i)
    {
        cin >> n >> m;
        price.push_back({n, m});
    }

    int res = 0;
    int min = 0xffffff;
    for (auto item : price)
    {
        int num = (x % item.first ? x / item.first + 1 : x / item.first);
        res = num * item.second;

        if (res < min) min = res;
    }

    cout << min << endl;

    return 0;
}