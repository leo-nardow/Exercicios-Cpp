#include <iostream>
using namespace std;

int main() {
    int *v,n,i,x=0;
    
    cin >> n;
    
    v = new int[n];
    
    for (i=0; i<n; i++) {
        cin >> v[i];
    }
    
    for (i=0; i<n; i++) {
        x = x + v[i];
    }
    cout << x;
    
    delete[] v;
    return 0;
}