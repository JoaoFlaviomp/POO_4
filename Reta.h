#ifndef RETA_H
#define RETA_H

#include <iostream>
#include <stdio.h>
#include "Ponto.h"

using namespace std;

class Reta{
    friend ostream & operator << (ostream &, const Reta &);
    friend istream & operator >> (istream &, Reta &);
    public:
        Reta(); // Construtor padrao
        Reta(Ponto, Ponto); // Construtor normal
        Reta(const Reta &); //Construtor de copia
        ~Reta();
        void setP1(Ponto);
        void setP2(Ponto);
        Ponto getPontoP1();
        Ponto getPontoP2();
        void imprime();
        double comprimento();
        Reta & operator = (const Reta &);
    private:
        Ponto p1;
        Ponto p2;
};

#endif
