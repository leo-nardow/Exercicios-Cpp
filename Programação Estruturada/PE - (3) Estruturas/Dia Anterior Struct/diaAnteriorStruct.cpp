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

Data anterior (Data x) {
    int b = bissexto(x.a);
    
    
    x.d = x.d - 1;
    
    if (x.d==0) {
        if (x.m == 1) {
            x.d = 31;
            x.m = 12;
            x.a = x.a - 1;
            return x;
        }
        if (x.m == 3) {
            if (b) {
                x.d = 29;
                x.m = 2;
                return x;
            }else {
                x.d = 28;
                x.m = 2;
                return x;
            }
            
        }else if ((x.m == 2)||(x.m==4)||(x.m==6)||(x.m==9)||(x.m==11)) {
            x.d = 31;
            x.m = x.m - 1;
            return x;
        } else {
            x.d = 30;
            x.m = x.m - 1;
            return x;
        }
        x.d = 1;
        x.m = x.m + 1;
        return x;
        
    }
    
    if (x.d>30) {
        if ((x.m==1)||(x.m==3)||(x.m==5)||(x.m==7)||(x.m==8)||(x.m==10)||(x.m==12)) {
            return x;
        } else {
            x.d = 1;
            x.m = x.m + 1;
            return x;
        }
    }
    
    if ((x.m == 2)&&(x.d>28)) {
        if (b) {
            if (x.d>29){
                x.d = 1;
                x.m = x.m + 1;
                return x;
            }
            return x;
        } else {
            x.d = 1;
            x.m = x.m + 1;
            return x;
        }
    }
    
    
    
    return x;
}

int main () {
    Data data;
    
    cin >>data.d >>data.m >>data.a;
    
    data = anterior(data);
    
    cout <<data.d << " " <<data.m << " "<<data.a << "\n";
    
    
    return 0;
}