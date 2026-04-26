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
#define CHAR_A_NUM(x) (x-'0');
#define TAM 6

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

//vectores

void ejercicio1_1(int *, int, int);
void cargarDesplazar(int *, int, int);
void cargarPos1Desplazar(int *, int);
void cargarVec(int *);
void mostrarVec(int *);
void mostrarCad(char *);
void ejercicio1_2(int *,int );
void ejercicio1_3(int *,int );
void ejercicio1_4(int *,int);
void eliminar1ElemDesplazar(int *, int);
void ejercicio1_5(int *,int);
int ejercicio1_6(char *,int);
int strlen_(char *);
int ejercicio1_7(char *);


#endif // ENCABEZADO_H_INCLUDED
