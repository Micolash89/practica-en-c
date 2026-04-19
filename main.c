#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;
    float b;

    printf("ingrese numero x\n");
    scanf("%d", &a);

    printf("el numero %d es: %s ",a, ejercicio7(a));

    return 0;
}
