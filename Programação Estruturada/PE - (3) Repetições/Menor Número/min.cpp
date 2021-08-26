#include <iostream>
using namespace std;

int main() {
    int x=0,y=-1;
    
    cin >> x;
    y = x;
    while (x>=0){

      cin >> x;
      if ((x<y)&&(x>=0)) {
         y = x;
      }
        
    };
    if (y<0){
        cout << "nenhum numero informado\n";
        return 0;
    } else {
        cout << y;
    }
    return 0;
}