#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    char vec[TAM]={'1','2','3','4','5','\0'};
    //char vec[TAM]="solos";
    //char c = '1';

   // printf("la palabra es palíndromo? %s\n",ejercicio1_6(vec,TAM)?"si":"no");

    //mostrarCad(vec);

    printf("%d",ejercicio1_7(vec));

    return 0;
}
