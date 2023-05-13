#include <cstdio>
#include <iostream>

using namespace std;

using LL = long long;

constexpr int N = 1e5 + 10;

int n;
int iarr[N], temp[N];

LL merge_sort(int arr[], int l, int r)
{
    if (l >= r)
        return 0;

    int m = l + r >> 1;
    LL res = merge_sort(arr, l, m) + merge_sort(arr, m + 1, r);

    int k = 0, i = l, j = m + 1;
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            res += m - i + 1;
        }
    }

    while (i <= m)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];

    for (int i = l, j = 0; i <= r; i++, j++)
        arr[i] = temp[j];

    return res;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> iarr[i];

    cout << merge_sort(iarr, 0, n - 1) << endl;

    return 0;
}