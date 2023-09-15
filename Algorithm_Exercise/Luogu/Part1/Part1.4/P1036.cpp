#include <iostream>
#include <cmath>

using namespace std;

constexpr int N = 20 + 5;

using LL = long long;

int n, m;
int iarr[N];
LL ans;

bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0)
            return false;

    return true;
}

void dfs(int k, int sum, int s)
{
    if (k == m)
    {
        if (isprime(sum))
            ++ans;

        return;
    }

    for (int i = s; i < n; ++i)
        dfs(k + 1, sum + iarr[i], i + 1);

    return;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> iarr[i];

    dfs(0, 0, 0);

    cout << ans << endl;

    return 0;
}