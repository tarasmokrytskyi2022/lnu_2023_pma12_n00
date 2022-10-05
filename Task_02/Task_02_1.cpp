#include <iostream>
using namespace std;

int main()
{
    double a, b, h, x, y, sum;
    cin >> a >> b >> h;
    x = a;
    sum = 0;
    while (x <= b)
    {
        y = cos(2 * x) + x;
        cout << x << "\t" << y << endl;
        sum += abs(y);
        x += h;
    }
    cout << "sum:" << sum;
}