#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

vector<int> res;

int main()
{
    int x;

    for (int i = 0; i < 3; ++ i) 
    {
        cin >> x;
        res.push_back(x);
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < 3; ++ i) cout << res[i] << " ";

    return 0;
}