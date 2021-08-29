#include <iostream>
using namespace std;

int main() {
    int *v, n, i, x, cont=0;
    
    cin >> n;
    
    v = new int[n];
    
    for (i=0; i<n; i++) {
        cin >> v[i];
    }
    
    cin >> x;
    
    for (i=0; i<n; i++) {
        if (v[i]>=x){
            cont++;
        }
    }
    
    cout << cont;
    
    delete[] v;
    return 0;
}