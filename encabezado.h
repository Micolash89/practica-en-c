#ifndef ENCABEZADO_H_INCLUDED
#define ENCABEZADO_H_INCLUDED

//macros
#define PARTE_ENTERA(x) ((int)(x))
#define PARTE_DECIMAL(x) ()
#define REDONDEO(x) ()
#define VALOR ABSOLUTO(x) ((x)>0?(x):-(x))
#define ES_MAYUSCULA(x) ((x)<='A'&&(x)<='Z'?1:0 )
#define ES_MINUSCULA(x) ((x)>='a'&&(x)<='z'?1:0 )
#define ES_NUMERO(x) ((x)<='0'&&(x)<='9'?1:0)
#define ES_LETRA(x) ((x)>='a'&&(x)<='z' || (x)<='A'&&(x)<='Z'?1:0 )
#define FACTORIAL(x) ((x)? ejercicio1(x) : 1)
#define CUBO(x) ((x)*(x))

//Tipos de datos del lenguaje. Estructuras de control. Estructuras iterativas.
int sumar(int, int);
void saludar();
int ejercicio1(int);
float ejercicio2(int, int);
float ejercicio3(int, float);
int exponencial(int, int);
float calcularTerminos(int, int, float);
float ejercicio4(float, float);
float calcularTerminosRaiz(float, float, float );
float modulo(float);
int ejercicio5(int, int, int);

float ejercicio6(int,float);//rehacer
float calcularTerminosSeno(int, int, float);

char * ejercicio7(int);
int calcularDivisor(int, int);
int ejercicio8(int ,int );
void ejercicio9(int ,int );
int ejercicio10(int);
int ejercicio11(int);
int ejercicio12(int);
int ejercicio13(int);
int esPrimo(int,int,int);
int redondeo(int);

#endif // ENCABEZADO_H_INCLUDED
