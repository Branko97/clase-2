#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD 5 // constante con tamaño del array

int main()
{
    int arrayDeEdades[CANTIDAD] ;
    int edadIngresada ;
    int indiceArray ;
    int valorIngresado ;
    int opcionMenu = 0 ;
    int pArray ;
    int limite ;

    for(indiceArray = 0 ; indiceArray < CANTIDAD ; indiceArray++ )
    {
        edadIngresada = getInt("Ingrese la edad: \n") ;
        arrayDeEdades[indiceArray] = edadIngresada ;
    }
    int initArray(int * pArray , int limite ; int valor)
    {
        int retormo = -1 ;
        int i ;
        if(pArray != NULL && limite > 0)
        {
            retormo = 0 ;
        }
        for(int * pArray , int limite ; int valor)
        return retormo ;
    }


    printf("Hello world!\n") ;
    return 0;
}
