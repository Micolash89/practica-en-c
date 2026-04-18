#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;
    float resultado, b;

    a=b=resultado=0;

    printf("ingrese numero x\n");
    scanf("%d", &a);
    printf("ingrese numero tol\n");
    scanf(" %f", &b);

    printf("e a la x %f ",ejercicio3(a,b));

    return 0;
}
