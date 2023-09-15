#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 5 * 1e2 + 5, M = 1e4 + 5;

struct Edge
{
    int x, y, w;
};

int n, m, k;
int dist[N], backup[N];
Edge edges[M];

int bellman_ford()
{
    dist[1] = 0;
    for (int i = 0; i < k; ++i)
    {
        memcpy(backup, dist, sizeof dist);

        for (int j = 0; j < m; ++j)
        {
            int x = edges[j].x, y = edges[j].y, w = edges[j].w;

            dist[y] = min(dist[y], backup[x] + w);
        }
    }

    if (dist[n] > 0x3f3f3f3f / 2)
        return 0x3f3f3f3f;
    return dist[n];
}

int main()
{
    cin >> n >> m >> k;

    int x, y, w;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y >> w;

        edges[i] = {x, y, w};
    }

    memset(dist, 0x3f, sizeof dist);

    int res = bellman_ford();

    if (res == 0x3f3f3f3f)
        puts("impossible");
    else
        cout << res << endl;

    return 0;
}