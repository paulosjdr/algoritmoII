https://en.cppreference.com/w/cpp
https://cplusplus.com/reference/

Modificadores LONG



int -> 8+8=16
char -> '8'+'8'= '88'

STRING Armezenar uma palavra inteira

char nome[10]
nome: "PAULO"

  [C++] string nome;
-------------------------------

pessoa p1;
pessoa p2;
pessoa p3;

p1.nome = "Paulo"
p1.idade = "30"
p1.endereco = "Rua Ilidia..."

struct pessoa {
  string nome;
  int idade;
  double salario;
}

  [C++] #include "bits/stdc++.h"
----------------------------------

semana dia;

dia = domingo;
  
  enum semana {
    domingo,
    segunda,
    terca,
  }

