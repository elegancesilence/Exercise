#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double fee;
    if (n <= 150) fee = n * 0.4463;
    else if (n > 150 && n <= 400) fee = (n - 150) * 0.4663 + 66.945;
    else fee = (n - 400) * 0.5663 + 183.52;

    printf("%.1lf", fee);

    return 0; 
}