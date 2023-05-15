#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sc;

int main()
{
    int n;
    cin >> n;

    int x;
    while (n --)
    {
        cin >> x;

        sc.push_back(x);
    } 

    sort(sc.begin(), sc.end());

    double sum = 0;
    for (int i = 1; i < sc.size() - 1; ++ i) sum += sc[i];

    printf("%.2lf\n", sum / (sc.size() - 2));

    return 0;
}