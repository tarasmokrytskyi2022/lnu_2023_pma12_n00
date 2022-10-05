#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d1, d2, d3, d4;
    d1 = n / 1000;
    d2 = (n % 1000) / 100;
    d3 = (n % 100) / 10;
    d4 = n % 10;
    //cout << d1 << " " << d2 << " " << d3 << " " << d4;
    cout << (d1 + d4 == d2 + d3 ? "Yes" : "No");
}