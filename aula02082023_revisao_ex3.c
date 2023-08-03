//INFORME A NOTA: 55 (EXEMPLO)
//1.VOCÊ FOI APROVADO
//2.VOCÊ FOI REPROVADO
//3.VOCÊ ESTÁ DE RECUPERAÇÃO
//OTIMIZAR O RECURSO IF

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
    } else if(nota<30){
        printf("VOCÊ FOI REPROVADO!\n");
    } else {
        printf("RECUPERAÇÃO!\n");
    }

    printf("SUA NOTA É: %.2f", nota);

    return 0;
}
