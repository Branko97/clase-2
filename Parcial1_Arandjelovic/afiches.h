#ifndef AFICHE_H_INCLUDED
#define AFICHE_H_INCLUDED
typedef struct
{
    char nombre[50];
    char apellido[50];
    float cuit;
    //------------
    int idAfiche;
    int isEmpty;
}Afiche;
#endif


int afiche_init(Afiche* array,int limite);
int afiche_mostrar(Afiche* array,int limite);
int afiche_mostrarDebug(Afiche* array,int limite);
int afiche_alta(Afiche* array,int limite);
int afiche_baja(Afiche* array,int limite, int id);
int afiche_modificacion(Afiche* array,int limite, int id);
int afiche_ordenar(Afiche* array,int limite, int orden);
int afiche_buscarPorId(Afiche* array,int limite, int id);
int afiche_altaForzada(Afiche* array,int limite,char* nombre,char* apellido, float cuit);
//int buscarLugarLibre(Afiche* array,int limite);
//int proximoId();
//int afiche_buscarPorId(Afiche* array,int limite, int id);

