#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 5e2 + 5;

int n, m;
int dis[N];
int g[N][N];
bool st[N];

int Dijkstra()
{
    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;

    for (int i = 0; i < n; ++i)
    {
        int t = -1;
        for (int j = 1; j <= n; ++j)
            if (!st[j] && (t == -1 || dis[t] > dis[j]))
                t = j;

        st[t] = true;

        for (int j = 1; j <= n; ++j)
            dis[j] = min(dis[j], dis[t] + g[t][j]);
    }

    if (dis[n] == 0x3f3f3f3f)
        return -1;
    return dis[n];
}

int main()
{
    cin >> n >> m;

    memset(g, 0x3f, sizeof g);

    int x, y, z;
    while (m--)
    {
        cin >> x >> y >> z;

        g[x][y] = min(g[x][y], z);
    }

    cout << Dijkstra() << endl;

    return 0;
}