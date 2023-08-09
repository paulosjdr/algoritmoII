//ESCREVA UM PROGRAMA QUE INFORME NA TELA SE UM NÚMERO INTEIRO, INFORMADO PELO USUÁRIO É OU NÃO UM NÚMERO PRIMO.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor;

    printf("DIGITE UM NÚMERO: ");
    scanf("%d", &valor);

    if(valor%2==0 && valor>2)
        printf("%d NÃO É NÚMERO PRIMO!", valor);
    else if(valor==2)
        printf("2 É PRIMO");
    else{
         int ePrimo = 1;
         for(int i=2;i<=valor/2;i++){
            if(valor%i==0){
                ePrimo = 0;
                break;
            }

    }

        if(ePrimo)
            printf("%d É PRIMO", valor);
        else
        printf("%d NÃO É PRIMO!", valor);
    }

    return 0;
}
