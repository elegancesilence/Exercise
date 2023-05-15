#include <iostream>
#include <algorithm>

using namespace std;

int l[3];

int main()
{
    int a, b, c;
    for (int i = 0; i < 3; ++ i) cin >> l[i];

    sort(l, l + 3);

    if (l[0] + l[1] <= l[2]) cout << "Not triangle" << endl;
    else 
    {
        if (*l * *l + *(l + 1) * *(l + 1) == *(l + 2) * *(l + 2)) cout << "Right triangle" << endl;
        else if (*l * *l + *(l + 1) * *(l + 1) > *(l + 2) * *(l + 2)) cout << "Acute triangle" << endl;
        else if (*l * *l + *(l + 1) * *(l + 1) < *(l + 2) * *(l + 2)) cout << "Obtuse triangle" << endl;

        if (l[0] == l[1] || l[1] == l[2]) cout << "Isosceles triangle" << endl;
        if (l[0] == l[1] && l[1] == l[2]) cout << "Equilateral triangle" << endl;

        return 0;
    }
}