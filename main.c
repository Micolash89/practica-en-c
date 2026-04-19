#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;

    printf("ingrese numero a\n");
    scanf("%d", &a);


    printf("el numero %d es primo : %s",a,ejercicio13(a)?"si":"no");

    return 0;
}
