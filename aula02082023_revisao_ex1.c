//INFORME A NOTA: 55
//SUA NOTA É 55.00

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota;

    setlocale(LC_ALL, "");

    printf("INFORME A NOTA: ");
    scanf("%f", &nota);

    printf("SUA NOTA É: %.2f", nota);

    return 0;
}
