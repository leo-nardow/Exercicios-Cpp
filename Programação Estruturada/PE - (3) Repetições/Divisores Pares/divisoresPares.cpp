#include <iostream>
using namespace std;

int main() {
    int n, cont=0, i;
    
    cin >> n;
    
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            if (i%2==0) {
                cont++;
            }
        }
    }
    cout << cont;
    return 0;
}