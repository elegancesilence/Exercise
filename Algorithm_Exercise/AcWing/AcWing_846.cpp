#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

constexpr int N = 1e5 + 5, M = N * 2;

int n;
int idx;
int h[N], val[M], ne[M];
bool st[N];

int ans = N;

void add(int x, int y)
{
    val[idx] = y;

    ne[idx] = h[x];
    h[x] = idx++;
}

int dfs(int u)
{
    st[u] = true;

    int sum = 1, res = 0;
    for (int i = h[u]; i != -1; i = ne[i])
    {
        int t = val[i];
        if (!st[t])
        {
            int s = dfs(t);

            res = max(res, s);
            sum += s;
        }
    }

    res = max(res, n - sum);
    ans = min(ans, res);

    return sum;
}

int main()
{
    cin >> n;

    memset(h, -1, sizeof h);

    int a, b;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> a >> b;

        add(a, b), add(b, a);
    }

    dfs(1);

    cout << ans << endl;

    return 0;
}