



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota;

    setlocale(LC_ALL, "");

    printf("INFORME A NOTA: ");
    scanf("%f", &nota);

    if(nota>=60){
        printf("VOCÊ FOI APROVADO!\n");
    }
    if(nota<30){
        printf("VOCÊ FOI REPROVADO!\n");
    }
    if(nota>=30 && nota<60){
        printf("RECUPERAÇÃO!\n");
    }

    printf("SUA NOTA É: %.2f", nota);

    return 0;
}
