#include <iostream>

using namespace std;

int somatorio(int x){
    int som;
    som = 0;
    for(int i=x; i>=x; i--){
        som = som+i;
    }
    return som;
}
int main()
{
    int s, valor;
    cout << "INFORME O VALOR" << endl;
    cin >> valor;
    s = somatorio(valor);
    cout << valor << "Somatorio = " << s << endl;

    return 0;
}
