#include <iostream>
#include <vector>
#include <string>
#include "Pessoa.h"

using namespace std;


// Implementação Construtores
Pessoa::Pessoa(){
    this->nome = " ";
    this->idade = 0;
    this->altura = 0.0;
}

Pessoa::Pessoa(string nome, int idade, double altura){
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
}


// Implementação Getters e Setters
string Pessoa::getNome(){
    return this->nome;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}


int Pessoa::getIdade(){
    return this->idade;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}


double Pessoa::getAltura(){
    return this->altura;
}

void Pessoa::setAltura(double altura){
    this->altura = altura;
}

ostream &operator<<(ostream &output, const Pessoa &p) { 
    output << "Nome: " << p.nome << "; Idade: " << p.idade << "; Altura: " << p.altura;
    return output;            
}