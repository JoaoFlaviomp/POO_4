#include "Ponto.h"
#include "Reta.h"
#include <iostream>

using namespace std;

int main(){
    Ponto P1,P2,P3;
    
    cout << "Digite X e Y respectivamente para objeto P1" << endl;
    cin >> P1;
    cout << P1 << endl;
    P1.imprime();

    cout << "Digite X e Y respectivamente para ojeto P2" << endl;
    cin >> P2;
    cout << P2 << endl;
    P2.imprime();

    P3 = P2;
    cout << P3 << endl;
    P3.imprime();

    Reta R1(P1,P2);
    cout << "Comprimento: " << R1.comprimento() << endl;
    cout << R1 << endl;
    
    return 0;
}