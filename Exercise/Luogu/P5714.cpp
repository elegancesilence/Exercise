#include <iostream>

using namespace std;

int main()
{
    double m, h;
    cin >> m >> h;

    double BMI = m / (h * h);
    if (BMI < 18.5) cout << "Underweight" << endl;
    else if (BMI >= 18.5 && BMI < 24) cout << "Normal" << endl;
    else cout << BMI << "\n" << "Overweight" << endl;

    return 0;
}