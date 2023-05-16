#include <iostream>
#include <string>

using namespace std;

constexpr int N = 1e4 + 5;

using LL = long long;

LL n, m, t, cnt;
string text[N], inp[N], str;

int main()
{
    while (getline(cin, str), str != "EOF")
    {
        ++n;

        for (auto i : str)
            if (i == '<')
            {
                if (!text[n].empty())
                    text[n].pop_back();
            }
            else
                text[n].push_back(i);
    }

    while (getline(cin, str), str != "EOF")
    {
        if (++m > n)
            break;

        for (auto i : str)
            if (i == '<')
            {
                if (!inp[m].empty())
                    inp[m].pop_back();
            }
            else
                inp[m].push_back(i);

        for (int i = 0; i < min(text[m].size(), inp[m].size()); ++i)
            if (text[m][i] == inp[m][i])
                ++cnt;
    }

    cin >> t;
    cout << static_cast<LL>(cnt * 60.0 / t + 0.5);

    return 0;
}