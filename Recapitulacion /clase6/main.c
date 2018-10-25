#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "utn.h"

#define PUTMAX 100
int main()
{
    char input[PUTMAX] ;
    int length ;
    printf("Ke lo ke he chigüire, ingresa algo ahi pue: ") ;
    scanf("%s" , input) ;
    length = strlen(input) ;
    if(length > 0)
    {
        if(esNumerico(input))
        {
            printf("Es solo numero causa\n") ;
        }
        if(esSoloLetras(input))
        {
            printf("Son solo letra mano\n") ;
        }
        if(esTelefono(input))
        {
            printf("Es un telefono, me puedes decir la hora, jejeje te la creiste manubrio, SOPORTALAAAAA\n") ;
        }
        if(esAlfaNumerico(input))
        {
            printf("Es alfanumerico, es la clave del face, instagram o del banco, hablame claro betoben jejeje\n ") ;
        }
    }
    return 0;
}
