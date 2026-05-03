#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    //char vec[TAM]={'1','2','3','4','5','\0'};
    //char vec2[]="hola";
    //char c = '1';

   // printf("la palabra es palíndromo? %s\n",ejercicio1_6(vec,TAM)?"si":"no");

    //mostrarCad(vec2);
/*
    ejercicio1_10(vec2);
    printf("\n");
    mostrarCad(vec2);
*/
  char buffer[10]="hola";

    memset_(buffer, 'A', 4);
    //buffer[9]='\0';
    printf("%s",buffer);

    return 0;
}
