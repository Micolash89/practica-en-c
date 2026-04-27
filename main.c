#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    //char vec[TAM]={'1','2','3','4','5','\0'};
    char vec2[]="     en mi casa    estamos solos los dos con han solo en solos";
    //char c = '1';

   // printf("la palabra es palíndromo? %s\n",ejercicio1_6(vec,TAM)?"si":"no");

    //mostrarCad(vec2);

    printf("\n");
    mostrarCad(ejercicio1_9(vec2));

    return 0;
}
