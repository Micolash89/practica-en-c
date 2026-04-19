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

    printf("%dX%d es: %d ",a,b, b<a?ejercicio8(a,b):ejercicio8(b,a));

    return 0;
}
