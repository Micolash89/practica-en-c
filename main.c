#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    int a;

    printf("ingrese numero x\n");
    scanf("%d", &a);

    printf("el número %d pertenece a figonacci? %s ",a, ejercicio5(1,1,a)?"si":"no");

    return 0;
}
