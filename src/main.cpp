#include <iostream>
#include <string>
#include <vector>
#include "Pessoa.h"

using namespace std;

template <typename T> 
T maior(T x, T y){
    if(x > y)
        return x;
    else
        return y;
}

// Operator overloading
int operator> (Pessoa& pessoa1, Pessoa& pessoa2){
    if(pessoa1.getIdade() > pessoa2.getIdade())
        return 1;
    else 
        return 0;
}

int main(){    
    cout << maior<int>(33, 17) << endl;
    cout << maior<double>(4.523, 9.1293) << endl;

    Pessoa p1, p2;

    p1.setNome("Jose");
    p1.setIdade(20);
    p1.setAltura(1.7);

    p2.setNome("Lori");
    p2.setIdade(21);
    p2.setAltura(1.62);

    cout << maior<Pessoa>(p1, p2) << endl;

    cout << p1.getNome() << endl;
    cout << p1.getIdade() << endl;
    cout << p1.getAltura() << endl;

    cout << p2.getNome() << endl;
    cout << p2.getIdade() << endl;
    cout << p2.getAltura() << endl;


    return 0;
}