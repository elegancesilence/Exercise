#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
    int cnt = 0;
    getline(cin, str);

    for (auto c = str.begin(); c != str.end(); ++c)
    {
        if (*c != ' ' && *c != '\n')
        {
            ++cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}