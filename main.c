#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero  ;
    int numeroMax ;
    int numeroMin ;
    int contador;
    int acumulador ;
    float promedio ;

    numeroMax = numero ;
    numeroMin = numero ;


    for(contador = 0 ; contador < 10 ; contador ++)
    {

    printf("Ingrese  numero ") ;
    scanf("%d", &numero) ;

    if (contador == 0)
    {
          numeroMax = numero ;
    numeroMin = numero ;
    }


    if(numero > numeroMax)
        {
            numeroMax = numero;
        }

        if(numero < numeroMin)
        {
            numeroMin = numero;
        }

        acumulador = acumulador + numero ;
        promedio = acumulador / 10 ;
    }

    printf("El maximo es: %i\n",numeroMax);
    printf("El minimo es: %i\n",numeroMin);
    printf("El promedio es: %f\n", promedio);
    return 0;

}
