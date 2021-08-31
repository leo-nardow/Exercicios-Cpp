#include <iostream>
using namespace std;

class Racional {
    private:
        int num, deno;
        
    public:
        Racional(int, int);
        int getNum();
        int getDeno();
        void setNum(int);
        void setDeno(int);
        void negativo ();
        void soma (Racional);
        void subtracao (Racional);
        void produto (Racional);
        void quociente (Racional);
        void simplifica ();
};

int mdc (int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc (y, x%y);
}

//Construtor que recebe dois inteiros a e b e preenche os atributos do novo objeto.
Racional::Racional(int num, int deno) {
    this->setNum(num);
    this->setDeno(deno);
}

void Racional::setNum(int num) {
    this->num = num;
}

void Racional::setDeno(int deno) {
    this->deno = deno;
}

int Racional::getNum() {
    return this->num;
}

int Racional::getDeno() {
    return this->deno;
}


//Torna negativo o objeto que invocou o método
void Racional::negativo () {
    return this->setNum(this->getNum()*-1);
}

//Recebe um racional e efetua a adição entre o objeto do argumento com o objeto que invocou o método.
void Racional::soma (Racional r1) {
    this->setNum((this->getNum()*r1.getDeno()) + (this->getDeno()*r1.getNum()));
    this->setDeno(this->getDeno()*r1.getDeno());
} 

//Recebe um racional e efetua a subtração entre o objeto do argumento com o objeto que invocou o método.
void Racional::subtracao (Racional r1) {
    r1.setNum(r1.getNum()*-1);
    this->soma(r1);
} 

//Recebe um racional e efetua o produto entre o objeto do argumento com o objeto que invocou o método.
void Racional::produto (Racional r1) {
    this->setNum(this->getNum()*r1.getNum());
    this->setDeno(this->getDeno()*r1.getDeno());
}

//Recebe um racional e efetua o quociente entre o objeto do argumento com o objeto que invocou o método.
void Racional::quociente (Racional r1) {
    this->setNum(this->getNum()*r1.getDeno());
    this->setDeno(this->getDeno()*r1.getNum());
}

//Reduz ao máximo o objeto Racional que invocou o método.
void Racional::simplifica () {
    int x;
    
    x = mdc(this->getNum(), this->getDeno());

    this->setNum(this->getNum()/x);
    this->setDeno(this->getDeno()/x);
    
    if (this->getDeno() < 0) {
        this->setNum(this->getNum()*-1);
        this->setDeno(this->getDeno()*-1);
    }
}         


int main () {
    int a, b, c, d;
    char op;
    
    while (cin >> a >> b >> op >> c >> d) {
        Racional r1(a,b), r2(c,d);
        switch(op) {
            case '+':
                r1.soma(r2);
            break;
            case '-':
                r1.subtracao(r2);
            break;
            case '*':
                r1.produto(r2);
            break;
            case '/':
                r1.quociente(r2);
            break;
        }
        r1.simplifica();
        
        cout << r1.getNum() << " " << r1.getDeno() << "\n";
    }
    
    return 0;
}


