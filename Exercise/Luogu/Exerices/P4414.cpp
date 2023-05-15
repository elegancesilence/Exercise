#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int num[3];
unordered_map<char, int> letter = { {'A', 0}, {'B', 1}, {'C', 2} };

int main()
{
    for (int i = 0; i< 3; ++ i) cin >> num[i];

    sort(num, num + 3);

    string str;
    cin >> str;

    for (auto item : str)
        cout << num[letter[item]] << " ";
                
    return 0;
}