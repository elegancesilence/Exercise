#include <iostream>
#include <string>

using namespace std;

string a, b;

int main()
{
    getline(cin, a);
    getline(cin, b);

    for (int i = 0; i < a.length(); ++i)
    {
        a[i] = tolower(a[i]);
    }
    for (int i = 0; i < b.length(); ++i)
    {
        b[i] = tolower(b[i]);
    }

    a = ' ' + a + ' ';
    b = ' ' + b + ' ';

    if (b.find(a) == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        int alpha = b.find(a);
        int beta = b.find(a);
        int cnt = 0;
        while (beta != string::npos)
        {
            beta = b.find(a, beta + 1);

            ++cnt;
        }
        cout << cnt << " " << alpha << endl;
    }

    return 0;
}