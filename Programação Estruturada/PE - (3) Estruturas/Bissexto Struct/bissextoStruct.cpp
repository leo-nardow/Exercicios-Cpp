#include <iostream>
using namespace std;

int bissexto (int x) {
    
    if ((x%400==0)||(x%100!=0)) {
        if (x%4==0) {
            return 1;
        }
    }
    return 0;
}

int main () {
    int a;
    
    cin >> a;
    
    if (bissexto (a)) {
        cout << "ANO BISSEXTO"; 
    } else {
        cout << "ANO NAO BISSEXTO"; 
    }
    
    return 0;
}