#include "utn.h"
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "afiches.h"
#define CANTCLIENT 100
#define CANTVENTA 1000


int main()
{
    Afiche array[CANTCLIENT] ;
    int ID ;
    char nombre ;
    int cuit ;
    float precio ;
    char zona ;
    int venta ;
    int seleccion ;

    do
    {
         getValidInt("\n\n\n1 - ALTA CLIENTE \n2 - MODIFICACION DE DATOS DEL CLIENTE \n3 - BAJA DEL CLIENTE\n4 - VENDER AFICHES\n5 - EDITAR VENTA\n6 COBRAR VENTA\n7 IMPRIMIR CLIENTES\n8 SALIR\n\n\n","\nNo valida\n",&seleccion,1,8,1) ;


        switch(seleccion)
            {
                case 1 :
                afiche_alta(array, CANTCLIENT) ;
                break;
                case 2 :
                getValidInt("ID: ","\nID invalido\n",&ID,0,200,2);
                afiche_baja(array, CANTCLIENT,ID) ;
                break ;
                case 3 :

                break ;
                case 4 :
                system("cls") ;
                printf("coso 4") ;
                break ;
                case 5 :
                system("cls") ;
                printf("coso 5") ;
                break ;
                case 6 :
                system("cls") ;
                printf("coso 6") ;
                break ;
                case 7 :
                system("cls") ;
                printf("coso 7") ;
                break ;
            }
        }
        while(seleccion!= 8) ;


    return 0;
}
