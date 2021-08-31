#include <iostream>
using namespace std;

class Data {
    private:
        int dia, mes, ano;
    public:
        Data(int, int, int);
        int getDia ();
        int getMes ();
        int getAno ();
        void setDia (int);
        void setMes (int);
        void setAno (int);
        bool isValida ();
        bool isBissexto ();
    
};

//Construtor
Data::Data (int dia, int mes, int ano) {
    this->setDia (dia);
    this->setMes (mes);
    this->setAno (ano);
}


//Metodos Modificadores
void Data::setDia(int d) {
    this->dia = d;
}
        
void Data::setMes(int m) {
    this->mes = m;
}
        
void Data::setAno(int a) {
    this->ano = a;
}

//Metodos de Acesso
int Data::getDia() {
    return this->dia;
}
int Data::getMes() {
    return this->mes;
}
int Data::getAno() {
    return this->ano;
}

//Devolve true se a data deste objeto é valida, false caso contrário.
bool Data::isValida () {
    if ((this->getDia()<=0)||(this->getDia()>31)||(this->getMes()<=0)||(this->getMes()>12)||(this->getAno()<=0)) {
        return 0;
    }
    if ((this->getMes()==2)&&(this->getDia()>28)) {
        if (this->getDia()>29) {
            return 0;
        }
        return this->isBissexto();
    }
    if (this->getDia()==31) {
        if ((this->getMes()==1)||(this->getMes()==3)||(this->getMes()==5)||(this->getMes()==7)||(this->getMes()==8)||(this->getMes()==10)||(this->getMes()==12)) {
            return 1;
        } else {
            return 0;
        }
    }
    
    return 1;
} 

//Devolve true se o ano deste objeto é bissexto, false caso contrário.
bool Data::isBissexto () {
    if ((this->getAno()%400==0)||(this->getAno()%100!=0)) {
        if (this->getAno()%4==0) {
            return 1;
        }
    }
    return 0;
}




int main () {
    int n, i;
    cin >> n;
    
    for (i=0; i<n; i++) {
        int dia, mes, ano;
        cin >> dia >> mes >> ano;
        Data data(dia, mes, ano);
        if (data.isValida()) {
            cout << "DATA VALIDA\n";
        }else {
            cout << "DATA INVALIDA\n";
        }
    }
    
    
    
    return 0;
}