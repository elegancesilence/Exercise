#include <iostream>

using namespace std;

const int N = 1e1 + 5;

int n;
int path[N];
bool flag[N];

void bfs(int x)
{
    if (x == n)
    {
        for (int i = 0; i < n; ++i)
            cout << path[i] << " ";

        puts(" ");
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!flag[i])
        {
            path[x] = i;
            flag[i] = 1;

            bfs(x + 1);

            flag[i] = 0;
        }
    }
}

int main()
{
    cin >> n;

    bfs(0);

    return 0;
}