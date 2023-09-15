#include <iostream>

using namespace std;

constexpr int N = 1e5 + 10;

int n;
int iarr[N], res[N];

void merge_sort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int m = l + r >> 1;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);

    int k = 0;
    int i = l, j = m + 1;
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            res[k++] = arr[i++];
        else
            res[k++] = arr[j++];
    }

    while (i <= m)
        res[k++] = arr[i++];
    while (j <= r)
        res[k++] = arr[j++];

    for (int i = l, j = 0; i <= r; ++i, ++j)
        arr[i] = res[j];
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> iarr[i];

    merge_sort(iarr, 0, n - 1);

    for (int i = 0; i < n; ++i)
        cout << iarr[i] << " ";

    return 0;
}