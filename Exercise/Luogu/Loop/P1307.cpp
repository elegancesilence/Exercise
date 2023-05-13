#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> A;

int main()
{
    int n;
    cin >> n;

    if (n == 0) A.push_back(n);

    bool flag = false;
    if (n < 0)
    {
        flag = true;
        n = abs(n);
    } 
    
    while (n)
    {
        A.push_back(n % 10);
        n /= 10;
    }

    if (flag) cout << "-" << "";

    bool symbol = true;
    for (int item : A) 
    {
        if (item == 0) 
        {
            if (A.size() == 1) cout << 0 << endl;

            if (symbol) continue;
        }

        symbol = false;

        cout << item << "";
    }

    return 0;
}