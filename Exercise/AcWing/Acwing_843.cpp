#include <iostream>

using namespace std;

constexpr int N = 1e1 + 5;

int n;
char q[N][N];
bool col[N], dg[N * 2], udg[N * 2];

void dfs(int r)
{
    if (r == n)
    {
        for (int i = 0; i < n; ++i)
            cout << q[i] << endl;

        puts("");

        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (!col[i] && !dg[i + r] && !udg[n - i + r])
        {
            q[r][i] = 'Q';
            col[i] = dg[i + r] = udg[n - i + r] = true;

            dfs(r + 1);

            col[i] = dg[i + r] = udg[n - i + r] = false;
            q[r][i] = '.';
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            q[i][j] = '.';

    dfs(0);

    return 0;
}