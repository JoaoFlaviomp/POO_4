#include "Reta.h"
#include <math.h>

Reta :: Reta(){
    cout << "Construtor padrao" << endl;
}

Reta :: Reta(Ponto px, Ponto py) : p1(px), p2(py){
    cout << "Construtor normal" << endl;
}

Reta :: Reta(const Reta &obj){
    cout << "Construtor de copia" << endl;
    p1 = obj.p1;
    p2 = obj.p2;
}

Reta :: ~Reta(){
    cout << "Destrutor" << endl;
}

void Reta :: setP1(Ponto px){
    p1 = px;
}

void Reta :: setP2(Ponto py){
    p2 = py;
}

Ponto Reta :: getPontoP1(){
    return p1;
}

Ponto Reta :: getPontoP2(){
    return p2;
}

void Reta :: imprime(){
    cout << p1 << p2 << endl;
}

double Reta :: comprimento(){
    double resultado;
    resultado = sqrt((pow(p2.getX() - p1.getX(), 2)) + (pow(p2.getY() - p1.getY(), 2)));
    return resultado;
}

ostream & operator << (ostream & saida, const Reta &objP){
   saida << objP.p1 << objP.p2;
   return saida;
}

istream & operator >> (istream & entrada, Reta & objP){
    entrada >> objP.p1 >> objP.p2;
    return entrada;
}

Reta& Reta :: operator = (const Reta &objR){
    if(&objR != this){
        this -> p1 = objR.p1;
        this -> p2 = objR.p2;
    }
    return *this;
}


