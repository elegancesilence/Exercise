#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 5;

int n, m;
int dgr[N], q[N];

int idx;
int h[N], val[N], ne[N];

void add(int x, int y)
{
    val[idx] = y;

    ne[idx] = h[x];
    h[x] = idx++;
}

void topsort()
{
    int head = 0, tail = -1;
    for (int i = 1; i <= n; ++i)
        if (dgr[i] == 0)
            q[++tail] = i;

    while (head <= tail)
    {
        int t = q[head++];

        for (int i = h[t]; i != -1; i = ne[i])
        {
            int d = val[i];
            --dgr[d];

            if (dgr[d] == 0)
                q[++tail] = d;
        }
    }

    if (tail != n - 1)
        cout << -1 << endl;
    else
        for (int i = 0; i < n; ++i)
            cout << q[i] << " ";
}

int main()
{
    cin >> n >> m;

    memset(h, -1, sizeof h);

    int a, b;
    while (m--)
    {
        cin >> a >> b;

        ++dgr[b];

        add(a, b);
    }

    topsort();

    return 0;
}