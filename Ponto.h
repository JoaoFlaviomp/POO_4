#ifndef PONTO_H
#define PONTO_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Ponto{
    friend ostream & operator << (ostream &, const Ponto &);
    friend istream & operator >> (istream &, Ponto &);
    public:
        Ponto(); // Construtor padrao
        Ponto(int,int); // Construtor normal
        Ponto(const Ponto &); //Construtor de copia
        ~Ponto();
        Ponto& setX (int);
        Ponto& setY(int);
        Ponto& getX();
        Ponto& getY();
        void imprime();
        Ponto & operator = (const Ponto &);
    private:
        int x;
        int y;
};

#endif
