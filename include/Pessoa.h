#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa{
private:
    string nome;
    int idade;
    double altura;
public:
    // Construtores
    Pessoa();
    Pessoa(string nome, int idade, double altura);

    // Getters e Setters
    string getNome();
    void setNome(string nome);

    int getIdade();
    void setIdade(int idade);

    double getAltura();
    void setAltura(double altura);

    friend ostream &operator<<(ostream &output, const Pessoa &p);
};

#endif