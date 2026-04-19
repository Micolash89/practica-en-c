#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a,b;

    printf("ingrese numero a\n");
    scanf("%d", &a);

    printf("ingrese numero b");
    scanf(" %d", &b);

    ejercicio9(a,b);

    return 0;
}
