![Logo UNLAM](unlam-universidad-nacional-de-la-matanza-seeklogo.png)

# Guía de Ejercicios - Tópicos de Programación

**Universidad Nacional de La Matanza**  
**Carrera**: Ingeniería en Informática  
**Materia**: Tópicos de Programación  
**Cuatrimestre**: 1er Cuatrimestre 2026  
**Año**: 3er Año - 1er Cuatrimestre  

---

## Información de la Cátedra

| Campo | Datos |
|-------|-------|
| **Carga Horaria** | 96 horas |
| **Régimen** | Anual |
| **Correlativas** | Algoritmos y Estructura de Datos I |
| **Código** | 649-3635 |

### Objetivos de la Materia

- Introducir al alumno en los conceptos fundamentales de la programación imperativa y modular.
- Desarrollar las capacidades de abstracción y decompose lógica de problemas.
- Implementar soluciones algorítmicas en lenguaje C.
- Afianzar el uso de funciones, recursividad y estructuras de datos básicas.

### Contenido Programático

1. **Programación Modular**
   - Funciones y procedimientos
   - Pasaje de parámetros por valor y referencia
   - Alcance de variables

2. **Recursividad**
   - Concepto y funcionamiento
   - Recursividad vs Iteración
   - Casos base y casos recursivos

3. **Estructuras de Datos**
   - Vectores y matrices
   - Cadenas de caracteres
   - Registros (struct)

4. **Archivos**
   - Lectura y escritura
   - Archivos de texto y binarios

---

## Descripción del Proyecto

Este proyecto contiene la resolución de la guía de ejercicios de la materia Tópicos de Programación, implementada en lenguaje C. Cada ejercicio representa un problema típico de programación que integra los conceptos enseñados en la cursada.

Los ejercicios abordan temas como:
- Cálculo de factoriales y combinaciones
- Series numéricas (exponencial, seno)
- Algoritmos matemáticos (raíz cuadrada, números primos, números perfectos)
- Operaciones aritméticas (multiplicación, división)
- Sumatorias y series especiales

---

## Ejercicios Implementados

| Ejercicio | Descripción |
|-----------|--------------|
| **Ejercicio 1** | Factorial de un número (recursivo) |
| **Ejercicio 2** | Combinación - C(m,n) = m! / (n! * (m-n)!) |
| **Ejercicio 3** | Serie exponencial eˣ |
| **Ejercicio 4** | Raíz cuadrada (método de Newton) |
| **Ejercicio 5** | Serie Fibonacci |
| **Ejercicio 6** | Serie seno |
| **Ejercicio 7** | Números perfectos, deficientes y abundantes |
| **Ejercicio 8** | Multiplicación recursiva |
| **Ejercicio 9** | División entera (cociente y resto) |
| **Ejercicio 10** | Sumatoria de 1 a n |
| **Ejercicio 11** | Sumatoria solo de números pares |
| **Ejercicio 12** | Sumatoria solo de números impares |
| **Ejercicio 13** | Determinar si un número es primo |

---

## Estructura del Proyecto

```
guia_de_ejercicios/
├── main.c              # Programa principal
├── funciones.c        # Implementación de los ejercicios
├── encabezado.h      # Archivo de encabezados
├── unlam-universidad-nacional-de-la-matanza-seeklogo.png
├── bin/Debug/
│   └── guia_de_ejercicios.exe    # Ejecutable
└── obj/Debug/                    # Archivos objeto
```

---

## Cómo Compilar y Ejecutar

### Requisitos

- Compilador GCC (MinGW) o CodeBlocks con compilador C
- Sistema operativo: Windows

### Compilación Manual

```bash
gcc -o guia_de_ejercicios.exe main.c funciones.c
```

### Ejecución

```bash
./guia_de_ejercicios.exe
```

O simplemente ejecuta el archivo `guia_de_ejercicios.exe` generado en la carpeta `bin/Debug/`.

---

## Tecnologías

- **Lenguaje**: C
- **Compilador**: GCC / MinGW
- **IDE**: CodeBlocks (configuración incluida)
- **Gestión de versiones**: Git

---

## Autor

Proyecto desarrollado para la cursada de Tópicos de Programación  
Universidad Nacional de La Matanza (UNLAM)  
Facultad de Ingeniería y Ciencias Exactas

---

* materia:Topicos de Programación - 1er Cuatrimestre 2026