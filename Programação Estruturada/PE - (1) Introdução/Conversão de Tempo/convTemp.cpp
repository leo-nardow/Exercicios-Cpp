#include <iostream>
using namespace std;

int main() {
    int h=0,m=0,s;
    
    cin >> s;
    
    m = s/60;
    s = s%60;
    h = m/60;
    m = m%60;
    
    cout << h << ":" << m << ":" << s;
    
    return 0;
}