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


float ejercicio4(float a, float tol)
{

    return calcularTerminosRaiz(1,a, tol);

}

float calcularTerminosRaiz(float r1, float a, float tol)
{

    float r2 = .5*(r1+a/r1);

    printf("r2 %f\n", r2);
    printf("diferencia %f\n", (r1-r2));

    if(modulo(r1-r2)<tol)
        return r2;

    return calcularTerminosRaiz(r2, a, tol);

}

float modulo(float a)
{

    return a<0?-a:a;

}

int ejercicio5(int a, int b, int num)
{

    int t = a+b;

    if (num < t)
        return 0;

    return num==t ? 1 : ejercicio5(b, t, num);

}

float ejercicio6(int n, float tol)
{

    return (n + calcularTerminosSeno(3,-n,tol));
}


float calcularTerminosSeno(int x, int n, float tol)
{

    float t = (float)exponencial(n,x)/ejercicio1(x);

    if(modulo(t)<tol)
        return t;

    return t+calcularTerminosSeno(x+2,-1*n,tol);

}


char * ejercicio7(int a)
{

    int resultado = 1;

    if(a!=1)
        resultado += calcularDivisor(a, a-1);

    if(resultado == a)
        return "perfecto";
    if(resultado<a)
        return"deficiente";
    return "abundante";

}

int calcularDivisor(int a, int b)
{

    if(b==1)
        return 0;

    return a%b!=0 ?calcularDivisor(a,b-1): ((a/b) + calcularDivisor(a,b-1));

}

int ejercicio8(int a, int b)
{

    if(a==0 || b==0)
        return 0;

    return a+ ejercicio8(a,b-1);

}

void ejercicio9(int a, int b)
{

    if(b==0)
    {
        printf("error\n");
        return ;
    }

    printf("cociente %d resto %d de %d/%d",a/b,a%b,a,b );

}

int ejercicio10(int n)
{

    return n==0? 0: n+ejercicio10(n-1);

}

int ejercicio11(int n)
{

    if(n==0)
        return 0;

    return n%2==0?n+ejercicio11(n-1):ejercicio11(n-1);
}


int ejercicio12(int n)
{

    return ejercicio11(n-1);
}

int ejercicio13(int n)
{

    if(n==0)
        return 0;

    return esPrimo(n,1,0);

}


int esPrimo(int n, int den,int flac)
{

    if(flac==2)
    {
        return n==(den-1);
    }

    if(n%den==0)
        flac++;

    return esPrimo(n,den+1,flac);

}

//tengo que persarla mejor
int redondeo(int x)
{
    /*
    if(x<=10)
        return x%10?;
    if(x<=100)
        return x%100?;
    if(x<=1000)
        return x%1000?;
    if(x<=10000)
        return x%10000?;

    */
    return 0;

}


///////////////VECTORES ////////////////////

void ejercicio1_1(int *vec, int pos, int e)
{

    if(pos>TAM)
        return;

    vec = vec + pos - 1;

    *vec = e;

}

void cargarDesplazar(int *vec, int pos, int e)
{
    int aux,i=0;

    if(pos>TAM)
        return;

    vec = vec + pos - 1;
    i= pos - 1;

    while( i < TAM )
    {
        aux=*vec;
        *vec=e;
        vec++;
        i++;
        e=aux;
    }
}

void cargarPos1Desplazar(int *vec, int e)
{

    int aux, i=0;

    while(i<TAM)
    {
        aux=*vec;
        *vec=e;
        vec++;
        i++;
        e=aux;
    }

}

void mostrarVec(int *vec)
{

    for(int i=0; i<TAM; i++ )
    {
        printf("%d ",*vec);
        vec++;
    }

}

void mostrarCad(char *vec)
{
    int tam=strlen_(vec);

    for(int i=0; i<tam; i++ )
    {
        printf("%c",*vec);
        vec++;
    }

}

void cargarVec(int *vec)
{

    for(int i = 0; i<TAM; i++)
    {
        printf("ingrese elemento %d\n",i+1);
        scanf(" %d",vec);
        vec++;
    }

}

void ejercicio1_2(int *vec,int e)
{

    int i=0;
    while(*vec<e && i!=TAM-1)
    {
        i++;
        vec++;
    }

    if(*vec>e)
        cargarPos1Desplazar(vec,e);
}

void ejercicio1_3(int *vec,int pos)
{

    if(pos>TAM)
        return;

    vec=vec+pos-1;

    for(int i=0; i<(TAM-pos); i++)
    {
        *vec=*(vec+1);
        vec++;
    }
}

void ejercicio1_4(int *vec,int e)
{

    int i=0,flac=0;

    while(i!=TAM && flac!=1)
    {

        if(*vec==e)
        {
            ejercicio1_3(vec,i);
            flac=1;
        }

        vec++;
        i++;
    }
}

void ejercicio1_5(int *vec,int e)
{

    int i=0;

    while(i!=TAM )
    {
        if(*vec==e)
            eliminar1ElemDesplazar(vec,TAM-i);
        else
        {
            vec++;
            i++;
        }
    }
}

void eliminar1ElemDesplazar(int * vec,int tam)
{

    for(int i=0; i<tam; i++)
    {
        *vec=*(vec+1);
        vec++;
    }

}


int ejercicio1_6(char *vec, int tam)
{

    int flac=0;
    char *last = vec+tam-1;

    for(int i=0; i<tam/2; i++)
    {
        if(*vec!=*last)
            flac=1;
        last--;
        vec++;
    }

    return flac==0;
}

int strlen_(char *vec)
{

    int i=0;

    while(*vec!='\0')
    {
        vec++;
        i++;
    }

    return i+1;

}

int ejercicio1_7(char *vec)
{
    int mult=1,num=0, tam = strlen_(vec);
    char * last=vec+tam-2;

    if(tam==0)
        return 0;

    for(int i=0; i<tam-1; i++)
    {

        num+= ((*last)-'0')*mult;
        mult*=10;
        last--;
    }

    return num;

}

int ejercicio1_8(char *vec,char *vec2)
{

    char *aux = vec2, *vec1=vec;
    int cont=0,cont2=0, length=strlen_(vec2)-1;

    if(strlen_(vec1)==0)
        return 0;

    while(*vec1!='\0')
    {

        if(*vec1==*aux)
        {

            while(*vec1==*aux&&*vec1!='\0'&&*aux!='\0')
            {
                vec1++;
                aux++;
                cont2++;
            }
            if(cont2==length)
                cont++;
            aux=vec2;
            cont2=0;

        }
        else
            vec1++;
    }

    return cont;
}

///hacer
char* ejercicio1_9(char * vec)
{

    char *aux=vec,*aux2;

    while(*aux=='\n'||*aux=='\t'||*aux==' ')
        aux++;

    aux2=aux;
    printf("\n");
    while(*aux!='\0')
    {

        if(!ES_MAYUSCULA(*aux))
        {
            *aux = (*aux) - 32;
            aux++;
        }

        while(*aux!=' '&&*aux!='\0')
        {

            if(!ES_MINUSCULA(*aux))
            {
                *aux=(*aux) + 32;

            }
            aux++;
        }

        aux++;
        if(*aux==' ')
        {
            sacarEspaciosAdelante(aux);//normalizar espacios
        }
    }

    return aux2;

}


void sacarEspaciosAdelante(char *vec)
{

    char *aux=vec,*aux2=vec ;

    while((*aux=='\n'||*aux=='\t'||*aux==' ')&& *aux != '\0')
        aux++;


    while(*aux!='\0')
    {
        *aux2=*aux;
        aux++;
        aux2++;
    }

    *aux2='\0';

}
void ejercicio1_10(char * vec)
{

    char vec2[] = "abcdghijkoqtuv";
    char * aux=vec;
    int pos=1;

    while(*aux!='\0')
    {

        if(includeCad(vec2,aux))
            ofuscar(aux,vec2,pos);

        pos++;
        aux++;
    }

}

int includeCad(char * vec1, char *vec2)
{

    int flac=0;

    while(flac==0&&*vec1!='\0')
    {

        if(*vec1==*vec2)
            flac=1;

        vec1++;
    }

    return flac!=0;

}

void ofuscar(char *vec1,char *vec2,int cont)
{

    int last= strlen_(vec2) - 2;

    while(*vec1!=*vec2)
        vec2++;

    while(cont!=0)
    {

        if(*vec2=='a')
            vec2=vec2+last;
        else
            vec2--;

        cont--;

    }
    *vec1=*vec2;
}
