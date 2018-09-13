    #include <stdio_ext.h>
    #include <stdlib.h>
    #include "utn.h"

    static float getFloat(float* pBuffer)
    {
        return scanf("%f",pBuffer);
    }

    float utn_getFlotante(  float* pEntero, char* msg,
                        char msgErr[],float min, float max,
                        float reintentos)

    {
        float retorno=-1;
        float bufferFloat;
        if(pEntero != NULL && msg != NULL && msgErr != NULL
            && min <= max && reintentos >= 0)
        {
            do
            {
                reintentos--;
                printf("%s",msg);
                if( (getFloat(&bufferFloat) == 1) &&
                    (bufferFloat >= min && bufferFloat <= max))
                {
                    *pEntero = bufferFloat;
                    retorno = 0;
                    break;
                }
                else
                {
                    __fpurge(stdin);
                    printf("%s",msgErr);
                }
            }while(reintentos>=0);

        }
        return retorno;
    }

