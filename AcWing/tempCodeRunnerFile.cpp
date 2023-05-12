#include <iostream>

using namespace std;

constexpr int N = 1e5 + 10;

int n;
int iarr[N];

void quick_sort(int arr[], int l, int r)
{
    if (l >= r) return ;

    int m = arr[l + r >> 1];

    int i = l - 1, j = r + 1;
    while (i < j)
    {
        do ++ i; while (arr[i] < m);
        do -- j; while (arr[j] > m);

        if (i < j) swap(arr[i], arr[j]);
    }

    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++ i) cin >> iarr[i];

    quick_sort(iarr, 0, n);

    for (int i = 0; i < n; ++ i) cout << iarr[i] << " ";

    return 0;
}