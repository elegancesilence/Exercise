#include <iostream>

using namespace std;

constexpr int N = 1e2 + 5, M = 2e5 + 5;

int n;
int iarr[N], exi[M], cnt[M];

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> iarr[i];

        ++exi[iarr[i]];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            ++cnt[iarr[i] + iarr[j]];

    for (int i = 0; i < M; ++i)
        if (cnt[i] > 0 && exi[i])
            ++ans;

    cout << ans << endl;

    return 0;
}