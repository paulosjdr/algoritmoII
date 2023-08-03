//INFORME A NOTA: 55 (EXEMPLO)
//OTIMIZAR O RECURSO IF
//LER A NOTA DE CINCO ALUNOS
//CALCULAR A MÉDIA DOS CINCO ALUNOS
//INFORMAR A QUANTIDADE DE ALUNOS QUE ATINGIRAM ACIMA DA MÉDIA

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERO_ALUNOS 5

int main()
{
    float nota[NUMERO_ALUNOS]; //ARRAY COM 5 POSIÇÕES
    float soma, media;
    int qtdeAcimaDaMedia; //Escrita Camel Case

    setlocale(LC_ALL, "");

    for(int i=0; i<NUMERO_ALUNOS; i++){
        printf("\nINFORME A NOTA DO ALUNO %d: \n", i+1);
        scanf("%f", &nota[i]); //GRAVAR NOTA NA POSIÇÃO i

    }
    soma = 0;
    for(int i=0; i<NUMERO_ALUNOS; i++){
        soma = soma + nota[i]; //OU soma+=nota[i]
    }
    media = soma/NUMERO_ALUNOS;
    qtdeAcimaDaMedia = 0;
    for(int i=0; i<NUMERO_ALUNOS; i++){
        if(nota[i]>media){
            qtdeAcimaDaMedia++;
        }
    }
    printf("MÉDIA = %.2f", media);
    printf("\nALUNOS ACIMA DA  MÉDIA = %d", qtdeAcimaDaMedia);

    return 0;
}
