#include<iostream>
#include<stdio.h>
#include "Ponto.h"

using namespace std;

Ponto :: Ponto(){
    cout << "Construtor Padrao" << endl;
    x = 0;
    y = 0;
}

Ponto :: Ponto(int x1, int y1){
    cout << "Construtor Normal" << endl;
    setX(x1);
    setY(y1);
}

Ponto :: Ponto(const Ponto &obj){
    cout << "Construtor de Copia" << endl;
    x = obj.x;
    y = obj.y;
}

Ponto :: ~Ponto(){
    cout << "Destrutor" << endl;
}

Ponto& Ponto :: setX(int x2){
    this->x = x2;
    return *this;
}

Ponto& Ponto :: setY(int y2){
    this->y = y2;
    return *this;
}

Ponto& Ponto :: getX(){
    return *this;
}

Ponto& Ponto :: getY(){
    return *this;
}

void Ponto :: imprime(){
    cout << getX << getY << endl;
}

ostream& operator << (ostream & saida, const Ponto &p){
    saida << p.x << p.y;
    return saida;
}

istream& operator >> (istream & entrada, Ponto &p){
    entrada >> p.x >> p.y;
    return entrada;
}

Ponto& Ponto :: operator = (const Ponto &p){
    if(&p != this){
        this->x = p.x;
        this->y = p.y;
    }
    return *this;
}
