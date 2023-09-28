#include "Funciones.h"

int main()
{
    int filas=4, col=4;
    int **matriz =(int **)crearMatriz(filas,col,sizeof(int)); //castee crearMatriz
    cargarMatriz(matriz, filas, col);
    mostrarMatriz(matriz, filas,col);

    destruirMatriz((void**)matriz, filas);
    return 0;
}
