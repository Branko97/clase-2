#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD 15

int main()
{
    int indiceArray = 0 ;
    int numeroIngresado ;
    int arrayValores[CANTIDAD] ;
    int seleccion = 0 ;
    //int valorNumeroIngresado ;
    for(indiceArray = 0 ; indiceArray < CANTIDAD ; indiceArray ++)
        {
            numeroIngresado = getInt("Ingrese Valor: \n") ;
            arrayValores[indiceArray] = numeroIngresado ;
        }
    while(seleccion != 3)
    {
        seleccion = getInt("\n1 Mostrar \n2 Modificar \n3 Salir ") ;
        switch(seleccion)
            {
                case 1 :
                printf("\n\n Indice    -    Valor\n") ;
                for(indiceArray = 0 ; indiceArray < CANTIDAD ; indiceArray ++)
                    {
                        printf(" %d     -     %d \n" , indiceArray , arrayValores[indiceArray]) ;
                    }
                break ;

                case 2 :
                indiceArray = getInt("Ingrese indice del valor a modificar\n") ;
                if(indiceArray > 0 && indiceArray < CANTIDAD)
                        {
                            numeroIngresado = getInt("Ingrese nuevo valor\n") ;
                            arrayValores[indiceArray] = numeroIngresado ;
                        }
                        else
                        {
                            printf("Indice fuera de rango, HUUUUUUUUUUU!!!!!!!!\n") ;
                        }
            break ;
            }
    }
    return 0;
}
