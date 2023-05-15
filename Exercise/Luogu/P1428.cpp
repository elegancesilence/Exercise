#include <iostream>

using namespace std;

constexpr int N = 1e2 + 10;

int num[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++ i) cin >> num[i];

    cout << 0 << " ";

    for (int i = 1; i < n; ++ i)
    {
        int cnt = 0;
        for (int j = 0; j < i; ++ j) 
            if (num[j] < num[i])
                ++ cnt;
        cout << cnt << " ";
    }

    return 0;
}