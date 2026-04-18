#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    float a, b;

    a=b=0;

    printf("ingrese numero x\n");
    scanf("%f", &a);
    printf("ingrese numero tol\n");
    scanf(" %f", &b);

    printf("raiz %f ",ejercicio4(a,b));

    return 0;
}
