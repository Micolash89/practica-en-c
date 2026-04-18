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


float ejercicio4(float a, float tol){



    return calcularTerminosRaiz(1,a, tol);

}

float calcularTerminosRaiz(float r1, float a, float tol){

    float r2 = .5*(r1+a/r1);

    printf("r2 %f\n", r2);
    printf("diferencia %f\n", (r1-r2));

    if(modulo(r1-r2)<tol)
        return r2;

    return calcularTerminosRaiz(r2, a, tol);

}

float modulo(float a){

    return a<0?-a:a;

}

int ejercicio5(int a, int b, int num){

    int t = a+b;

    printf("%d ", t);

    if (num < t)
        return 0;

    return num==t ? 1 : ejercicio5(b, t, num);

}
