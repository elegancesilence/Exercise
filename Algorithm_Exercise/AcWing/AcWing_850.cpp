#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 2e5 + 5, M = 2e5 + 5;

using PII = pair<int, int>;

int idx;
int h[N], wei[M], val[M], ne[M];

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

int dijkstra()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;

    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({0, 1});

    while (!heap.empty())
    {
        auto t = heap.top();
        heap.pop();

        int vertex = t.second, distance = t.first;
        if (st[vertex])
            continue;
        st[vertex] = true;

        for (int i = h[vertex]; i != -1; i = ne[i])
        {
            int temp = val[i];
            if (dist[temp] > distance + wei[i])
            {
                dist[temp] = distance + wei[i];
                heap.push({dist[temp], temp});
            }
        }
    }

    if (dist[n] == 0x3f3f3f3f)
        return -1;
    return dist[n];
}

int main()
{
    cin >> n >> m;

    memset(h, -1, sizeof h);

    int a, b, c;
    while (m--)
    {
        cin >> a >> b >> c;

        add(a, b, c);
    }

    cout << dijkstra() << endl;

    return 0;
}