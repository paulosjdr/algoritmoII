#include "bits/stdc++.h"

using namespace std;

void somar();
void subtrair();
void multiplicar();
void dividir();
void apresentarResultado(double x);

void leitura(double &x, double &y){
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
}

double operacao(char sinal){
    double x,y;
    leitura(x,y);
    switch(sinal){
        case '+':
            return x+y;
            break;
        case '-':
            return  x-y;
            break;
        case 'x':
            return  x*y;
            break;
        case '/':
            return  x/y;
            break;
    }
}

void somar(){
    apresentarResultado(operacao('+'));
}
void subtrair(){
    apresentarResultado(operacao('-'));
}
void multiplicar(){
    apresentarResultado(operacao('x'));
}
void dividir(){
    apresentarResultado(operacao('/'));
}

void apresentarResultado(double x){
    printf("RESULTADO = %.2lf\n", x);
    system("pause");
}
int menu(){
    int opcao;
    system("cls");
    cout << "Calculadora\n1.Somar\n2.Subtrair\n"
    << "3.Multiplicar\n4.Dividir\n5.Sair\nOPCAO:";
    cin >> opcao;
    return opcao;
}

void tratamentoOperacao(int op){
    switch(op){
        case 1:
            somar();
            break;
        case 2:
            subtrair();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
    }
}

int main()
{
    int op=0;
    while(op!=5){
        op = menu();
        tratamentoOperacao(op);
    }
    return 0;
}
