#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

constexpr int N = 1e5 + 5;

int n, m;
int d[N];

int idx;
int h[N], val[N], ne[N];

void add(int x, int y)
{
    val[idx] = y;

    ne[idx] = h[x];
    h[x] = idx++;
}

int bfs()
{
    queue<int> q;
    q.push(1);

    d[1] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int i = h[u]; i != -1; i = ne[i])
        {
            int t = val[i];
            if (d[t] == -1)
            {
                d[t] = d[u] + 1;

                q.push(t);
            }
        }
    }

    return d[n];
}

int main()
{
    cin >> n >> m;

    memset(h, -1, sizeof h);

    int a, b;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;

        add(a, b);
    }

    memset(d, -1, sizeof d);

    cout << bfs() << endl;

    return 0;
}