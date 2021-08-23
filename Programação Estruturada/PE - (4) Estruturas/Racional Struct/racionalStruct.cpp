#include <iostream>
using namespace std;

typedef struct tRacional {
    int num, deno;
}Racional;

//Recebe dois inteiros numerador e denominador e retorna o racional
Racional racional (int x, int y) {
    Racional r;
    
    r.num = x;
    r.deno = y;
    
    return r;
}

int mdc (int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc (y, x%y);
}

//Recebe um racional e reduz a fração ao máximo.
Racional reduz(Racional r) {
    int x;
    
    x = mdc (r.num, r.deno);
    
    r.num = r.num/x;
    r.deno = r.deno/x;
    if (r.deno < 0) {
        r.num = -r.num;
        r.deno = -r.deno;
    }
    
    return r;
}

//Recebe um racional e retorna o seu negativo.
Racional negativo (Racional r) {
    
    r.num = r.num*-1;
    
    return r;
}   

//Recebe dois racionais e retorna a adição de ambos.
Racional soma (Racional r1, Racional r2) {
    Racional r;
    
    r.num = r1.num*r2.deno + r1.deno*r2.num;
    r.deno = r2.deno*r1.deno;
    
    
    return r;
}

//Recebe dois racionais e retorna o produto de ambos.
Racional mult (Racional r1, Racional r2) {
    Racional r;
    
    r.num = r1.num*r2.num;
    r.deno = r1.deno*r2.deno;
    
    
    return r;
}

//Recebe dois racionais e retorna o quociente de ambos.
Racional div(Racional r1, Racional r2) {
    Racional r;
    
    r.num =  r1.num*r2.deno;
    r.deno =  r1.deno*r2.num;
    
    
    return r;
}



int main () {
    int a, b, c ,d;
    char op;
    
    while (cin >> a >> b >> op >> c >> d) {
        Racional r1 = racional(a, b), r2 = racional(c, d), r3;
        
        switch(op) {
            case '+':
                r3 = soma(r1,r2);
            break;
            case '-':
                r3 = soma(r1,negativo(r2));
            break;
            case '*':
                r3 = mult(r1,r2);
            break;
            case '/':
                r3 = div(r1,r2);
            break;
        }
        r3 = reduz(r3);
        
        cout << r3.num << " " << r3.deno << "\n";
    }
    
    
    return 0;
}