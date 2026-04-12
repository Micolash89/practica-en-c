#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a, b, resultado;

    printf("ingrese 1� numero numero \n");
    scanf("%d", &a);
    printf("ingrese 2� numero numero \n");
    scanf(" %d", &b);

    resultado = sumar(a , b);

    printf("la suma es : %d + %d", a, b);


    return 0;
}
