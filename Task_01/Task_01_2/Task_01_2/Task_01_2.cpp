#include <iostream>
using namespace std;

int main()
{
    double x;
    cin >> x;
    cout << (x >= 7 ? -x * x : pow(2, x)/(x*x+1));
}