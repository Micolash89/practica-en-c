#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;

    printf("ingrese numero a\n");
    scanf("%d", &a);


    printf("factorial de %d %d",a,FACTORIAL(a));

    return 0;
}
