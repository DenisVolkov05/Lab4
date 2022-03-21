#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 1;
    double sum = 0, pr = 1;
    while (pr > 0.000001)
    {
        pr = (pow(2, n) + cos(3.14 * n)) / pow(3, n);
        sum += pr;
        n++;
    }
    cout << sum;
}