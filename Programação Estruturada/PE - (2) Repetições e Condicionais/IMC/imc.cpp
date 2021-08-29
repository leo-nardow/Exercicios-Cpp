#include <iostream>
using namespace std;

int main() {
    float a, m;
    
    cin >> a >> m;
    
    a = m/(a*a);
    
    if (a<16) {
        cout << "Magreza grave\n";
    } else if (a<17) {
        cout << "Magreza moderada\n";
    } else if (a<18.5) {
        cout << "Magreza leve\n";
    } else if (a<25) {
        cout << "Saudavel\n";
    } else if (a<30) {
        cout << "Sobrepeso\n";
    } else if (a<35) {
        cout << "Obesidade Grau I\n";
    } else if (a<40) {
        cout << "Obesidade Grau II (severa)\n";
    } else {
        cout << "Obesidade Grau III (morbida)\n";
    }
    
    return 0;
}