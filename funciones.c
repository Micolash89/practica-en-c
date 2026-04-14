#include "encabezado.h"
#include <stdio.h>

int sumar(int a, int b)
{
    return a + b;
}

void saludar()
{
    printf("Hola desde un archivo separado.\n");
}

int ejercicio1(int n)
{
    /*if(n==0)
        return 1;

    return n * ejercicio1(n-1);*/


    return n==0? 1 :n*ejercicio1(n-1);
}
