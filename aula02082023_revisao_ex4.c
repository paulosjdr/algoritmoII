//INFORME A NOTA: 55 (EXEMPLO)
//1.VOCÊ FOI APROVADO
//2.VOCÊ FOI REPROVADO
//3.VOCÊ ESTÁ DE RECUPERAÇÃO
//OTIMIZAR O RECURSO IF
//LER A NOTA DE TRÊS ALUNOS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota;

    setlocale(LC_ALL, "");

    for(int i=0; i<=2; i++){
        printf("\nINFORME A NOTA DO ALUNO %d: \n", i+1);
        scanf("%f", &nota);

        if(nota>=60){
            printf("VOCÊ FOI APROVADO!\n");
        } else if(nota<30){
            printf("\nVOCÊ FOI REPROVADO!\n");
        } else {
            printf("\nRECUPERAÇÃO!\n");
        }

        printf("SUA NOTA É: %.2f", nota);

    }

    return 0;
}
