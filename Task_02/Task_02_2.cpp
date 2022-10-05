#include <iostream>
using namespace std;

int main()
{
    double x, res;
    cin >> x;
    res = 1;
    for (int i = 2; i <= 64; i *= 2)
    {
        res *= (x - i + 1) / (x - i);        
    }
    cout << "res:" << res;
}