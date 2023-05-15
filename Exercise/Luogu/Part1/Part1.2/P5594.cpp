#include <iostream>
#include <vector>

using namespace std;

constexpr int N = 1e3 + 5;

int n, m, k;
int cnt[N][N];

int main()
{
    cin >> n >> m >> k;

    int x;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> x;

            ++cnt[x][j];
        }
    }

    for (int i = 1; i <= k; ++i)
    {
        int res = 0;
        for (int j = 1; j <= k; ++j)
        {
            if (cnt[i][j])
            {
                ++res;
            }
        }

        cout << res << " ";
    }

    return 0;
}