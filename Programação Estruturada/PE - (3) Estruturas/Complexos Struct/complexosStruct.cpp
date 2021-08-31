#include <iostream>
using namespace std;

typedef struct tComplex {
    int r,i;
}Complex;


//Recebe dois inteiros a e b e devolve um complexo.
Complex complexo (int x, int y) {
    Complex c;
    
    c.r = x;
    c.i = y;
    
    return c;
}       

//Recebe dois complexos e devolve a adição.
Complex soma (Complex m1, Complex m2) {
    Complex c;
    
    c.r = m1.r+m2.r;
    c.i = m1.i+m2.i;
    
    return c;
}

//Recebe dois complexo e devolve a subtração.
Complex sub (Complex m1, Complex m2) {
    Complex c;
    
    c.r = m1.r-m2.r;
    c.i = m1.i-m2.i;
    
    return c;
}

//Recebe dois complexos e devolve o produto.
Complex mult (Complex m1, Complex m2) {
    Complex c;
    
    c.r = m1.r*m2.r - m1.i*m2.i;
    c.i = m1.r*m2.i + m1.i*m2.r;
    
    return c;
}

//Recebe dois complexos e devolve o quociente.
Complex div (Complex m1, Complex m2) {
    Complex c, conju=m2, num;
    int deno;
    
    conju.i = conju.i*-1;
    
    num = mult(m1,conju);
    deno = mult(m2,conju).r;
    c.r = num.r/deno;
    c.i = num.i/deno;
    
    return c;
}


int main() {
    int a, b, c, d;
    char i, op;
    Complex m1, m2;
    
    while(cin >> a >> b >> i >> op >> c >> d >>i) {
        Complex m1 = complexo(a,b), m2 = complexo(c,d), m3;
        switch(op) {
            case '+':
                m3 = soma(m1,m2);
            break;
            case '-':
                m3 = sub(m1,m2);
            break;
            case '*':
                m3 = mult(m1,m2);
            break;
            case '/':
                m3 = div(m1,m2);
            break;
        }
        cout << m3.r;
        if (m3.i<0) {
            cout<< " " << m3.i <<"i\n";
        } else {
            cout<< " +" << m3.i <<"i\n";
        }
        
    }
    
    return 0;
}