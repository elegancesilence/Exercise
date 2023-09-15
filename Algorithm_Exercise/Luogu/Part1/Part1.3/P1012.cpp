#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

constexpr int N = 1e2 + 5;

int n;
vector<string> vstr;

bool cmp(string &x, string &y)
{
    return (x + y > y + x);
}

int main()
{
    cin >> n;

    string str;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;

        vstr.push_back(str);
    }

    sort(vstr.begin(), vstr.end(), cmp);

    for (auto item : vstr)
        cout << item << "";

    return 0;
}
