#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;

    printf("ingrese numero a\n");
    scanf("%d", &a);


    printf("la suma de los primeros %d naturales es : %d",a,ejercicio11(a));

    return 0;
}
