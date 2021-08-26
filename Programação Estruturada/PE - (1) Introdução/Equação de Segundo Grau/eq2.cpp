#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cin >> a >> b >> c;
    
    c = sqrt(b*b - 4*a*c);
    b = b*-1;
    cout << fixed << setprecision(4) << ((b+c)/(2*a)) << " " << ((b-c)/(2*a));
    return 0;
}