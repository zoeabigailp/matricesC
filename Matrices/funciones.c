#include "Funciones.h"
//armo mis funciones
void ** crearMatriz(int fila, int col, int tamElem){
//tamElem esta en byte
    void **mat = malloc(fila*sizeof(void *)); // como no se q tipo de dato es, hago un sizeof. Reserve en memoria con malloc
    if(!mat){
        puts("Error, no esta en memoria");
        return NULL;
    }

    void **ult = mat + fila -1; //ult: va a apuntar el final del vector de punteros.
    void **i; // i: recorre todos los elementos del vector de punteros.
    //void **j me sirve por si i no va a memoria y asi pueda liberar memoria.
    for( i=mat; i<=ult ; i++ ){
        *i = malloc(col*tamElem);
            if(!*i){
                for( void **j= mat; j<i; j++ ){ //recoorro hasta donde quedo i y desp libero memoria.
                    free( *j );
                }
                free(mat);
                puts("Error, no esta en memoria");
                return NULL;
        }
    }
    return mat;
}
void destruirMatriz( void **mat, int filas){
    void **ult = mat + (filas-1);
    void **i;
    for( i=mat; i<= ult; i++ ){
        free(*i);
        free(mat);
    }
}

void cargarMatriz(int **mat, int fila, int col){
    int i, j;
    for(i=0; i<fila; i++){
        for(j=0; j<col; j++){
            mat[i][j]=i*4 + j+1;
        }
    }
}

void mostrarMatriz(int **mat, int fila, int col){
    int i, j;
    for(i=0; i<fila; i++){
        for(j=0; j<col; j++){
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
}
