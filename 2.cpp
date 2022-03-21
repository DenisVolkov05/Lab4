#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double pr = 1,pr2 = 0, mn, n = 2;
    while (abs(pr - pr2) >= 0.000001)
    {
        pr2 = pr;
        mn = (pow(n,3)-1)/(pow(n,3)+1);
        pr *= mn;
        n++;
    }
    cout << pr;
}