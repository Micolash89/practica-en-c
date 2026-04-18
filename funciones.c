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

float ejercicio2(int m, int n)
{

    if(m<=n || n<0)
        return -1;

    return ((float )ejercicio1(m)/ejercicio1(n)*ejercicio1(m-n));
}

float carcularTerminos(int num, int x, float tol)
{

    float t = (float )exponencial(x, num)/ejercicio1(num);

              if (t < tol)
                  return t;
    printf("termino %f\n", t);

    return t + carcularTerminos(num+1, x, tol);

}

float ejercicio3(int x, float tol)
{

    return (1 + carcularTerminos(1, x, tol));

}


int exponencial(int base, int e)
{

    int resultado=1;

    for(int i=0; i<e; i++)
        resultado*=base;

    return resultado;
}

