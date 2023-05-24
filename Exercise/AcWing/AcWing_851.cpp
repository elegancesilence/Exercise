#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 1e5 + 5, M = 1e5 + 5;

int idx;
int h[N], val[N], ne[M], wei[M];

int n, m;
int dist[N];
bool st[N];

void add(int x, int y, int w)
{
    val[idx] = y;
    wei[idx] = w;

    ne[idx] = h[x];
    h[x] = idx++;
}

int spfa()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;

    queue<int> q;
    q.push(1);
    st[1] = true;

    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        st[t] = false;

        for (int i = h[t]; i != -1; i = ne[i])
        {
            int temp = val[i];
            if (dist[temp] > dist[t] + wei[i])
            {
                dist[temp] = dist[t] + wei[i];

                if (!st[temp])
                {
                    st[temp] = true;
                    q.push(temp);
                }
            }
        }
    }

    if (dist[n] == 0x3f3f3f3f)
        return 0x3f3f3f3f;
    else
        return dist[n];
}

int main()
{
    cin >> n >> m;

    memset(h, -1, sizeof h);

    int x, y, w;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y >> w;

        add(x, y, w);
    }

    int res = spfa();

    if (res == 0x3f3f3f3f)
        puts("impossible");
    else
        cout << res << endl;

    return 0;
}