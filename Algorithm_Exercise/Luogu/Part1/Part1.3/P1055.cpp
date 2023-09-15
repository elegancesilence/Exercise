#include <iostream>
#include <string>

using namespace std;

string mod = "0123456789X";

int main()
{
    string isbn;
    cin >> isbn;

    int res = 0, cnt = 1;
    for (int i = 0; i < isbn.size() - 1; ++ i) 
        if (isbn[i] >= '0' && isbn[i] <= '9')
            res += (isbn[i] - '0') * cnt ++;

    if (isbn[12] == mod[res % 11]) cout << "Right" << endl;
    else
    {
        isbn[12] = mod[res % 11];

        cout << isbn << endl;
    }

    return 0;
}