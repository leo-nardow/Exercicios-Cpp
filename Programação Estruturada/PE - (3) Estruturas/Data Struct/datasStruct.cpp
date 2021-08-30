#include <iostream>
using namespace std;

typedef struct data {
    int d,m,a;
}Data;

int bissexto (int x) {
    
    if ((x%400==0)||(x%100!=0)) {
        if (x%4==0) {
            return 1;
        }
    }
    return 0;
}

int valida (Data x) {
    int y;
    
    if ((x.d<=0)||(x.d>31)||(x.m<=0)||(x.m>12)||(x.a<=0)) {
        return 0;
    }
    if ((x.m==2)&&(x.d>28)) {
        if (x.d>29) {
            return 0;
        }
        return bissexto(x.a);
    }
    if (x.d==31) {
        if ((x.m==1)||(x.m==3)||(x.m==5)||(x.m==7)||(x.m==8)||(x.m==10)||(x.m==12)) {
            return 1;
        } else {
            return 0;
        }
    }
    
    return 1;
}





int main() {
    int n;
    Data data;
    
    cin >> n;
    
    for (int i = 0; i<n; i++) {
        cin >>data.d >> data.m >>data.a;
        
        if (valida(data)) {
            cout << "DATA VALIDA\n"; 
        } else {
            cout << "DATA INVALIDA\n"; 
        }
    }
    
    return 0;
}