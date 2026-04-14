#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a, b, resultado;

    a=b=resultado=0;

    /*printf("ingrese 1° numero numero \n");
    scanf("%d", &a);
    printf("ingrese 2° numero numero \n");
    scanf(" %d", &b);

    resultado = sumar(a , b);

    printf("la suma es : %d", resultado);*/

    printf("ingrese número \n");
    scanf("%d", &a);

    resultado = ejercicio1(a);

    printf("El factorial de %d es %d",a, resultado);


    return 0;
}
