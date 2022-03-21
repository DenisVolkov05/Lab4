#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, sum = 0, sl = 1, n = 1, e = 2.718;
    cout << "Enter x = ";
    cin >> x;
    while (sl >= 0.000001)
    {
        sl = n * x / (1 + pow(n, 4) * pow(x, 2) + pow(n, 3));
        sum += sl;
        n++;
    }
    cout << sum - sl;
}