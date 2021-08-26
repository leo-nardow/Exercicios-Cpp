#include <iostream>
using namespace std;

int main () {
    int atual, nasc;
    string nome;
    
    cin >> atual;
    cin >> nome;
    cin >> nasc;
    
    cout << nome <<", voce completa " << (atual-nasc) << " anos de idade neste ano.";
    
    return 0;
}