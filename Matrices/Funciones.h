#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//declaro los prototipos de funciones

void ** crearMatriz(int fila, int col, int tamElem);
void destruirMatriz( void **mat, int filas);
void cargarMatriz(int **mat, int fila, int col);
void mostrarMatriz(int **mat, int fila, int col);

#endif // FUNCIONES_H_INCLUDED
