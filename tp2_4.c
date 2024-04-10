#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
struct compu{
    int velocidad;
    int anio;
    int cantNucleos;
    char *tipo_cpu;

}typedef compu;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
void cargarComputadoras(struct compu *computadoras, int cantidad);
void mostrarComputadoras(struct compu *computadoras, int cantidad);
void mostrarComputadoraAntigua(struct compu *computadoras, int cantidad);
void mostrarMayorVelocidad(struct compu *computadoras, int cantidad);

int main()
{
    compu arregloCompu[N], *puntArreglo;
    puntArreglo = arregloCompu;
    cargarComputadoras(puntArreglo, N);
    mostrarComputadoras(puntArreglo, N);   
    mostrarComputadoraAntigua(puntArreglo, N);
    mostrarMayorVelocidad(puntArreglo, N);

    return 0;
}

void cargarComputadoras(struct compu *computadoras, int cantidad)
{
    int indice;
    srand(time(NULL));
    for(int i = 0; i<cantidad;i++)
    {
       (computadoras + i)->velocidad = 1 + rand() % 3;
       (computadoras + i)->anio = 2015 + rand()%(2023 - 2015 + 1);
       (computadoras + i)->cantNucleos = 1 + rand() % 8;
       indice = rand() % 6;
       (computadoras + i)->tipo_cpu = tipos[indice];
       
    }
}
void mostrarComputadoras(struct compu *computadoras, int cantidad)
{
    for(int i = 0; i<cantidad;i++)
    {
       printf("\nComputadora %d", i);
       printf("\nVelocidad de la computadora: %d", (computadoras + i)->velocidad);
       printf("\nAño de la computadora: %d", (computadoras + i)->anio);     
       printf("\nNúmero de nucleos de la computadora: %d", (computadoras + i)->cantNucleos);
       printf("\nTipo de procesador de la computadora: %s", (computadoras + i)->tipo_cpu); 
       printf("\n");       
    }
}
void mostrarComputadoraAntigua(struct compu *computadoras, int cantidad)
{
    int anioMenor = 10000;
    for(int i=0;i<cantidad;i++)
    {
       if((computadoras + i)->anio < anioMenor)
       {
           anioMenor = (computadoras + i)->anio;
       }   
    }
    printf("\nLa/s computadora/s más antigua/s es/son: ");
    for(int i=0;i<cantidad;i++)
    {
       if((computadoras + i)->anio == anioMenor)
       {
            printf("\nComputadora %d", i);
            printf("\nVelocidad de la computadora: %d", (computadoras + i)->velocidad);
            printf("\nAño de la computadora: %d", (computadoras + i)->anio);     
            printf("\nNúmero de nucleos de la computadora: %d", (computadoras + i)->cantNucleos);
            printf("\nTipo de procesador de la computadora: %s", (computadoras + i)->tipo_cpu); 
            printf("\n"); 
       }   
    }
}
void mostrarMayorVelocidad(struct compu *computadoras, int cantidad)
{
    int mayorVelocidad = 0;
    for(int i=0;i<cantidad;i++)
    {
       if((computadoras + i)->velocidad > mayorVelocidad)
       {
           mayorVelocidad = (computadoras + i)->velocidad;
       }   
    }
    printf("\nLa/s computadora/s más veloz/ces es/son: ");
    for(int i=0;i<cantidad;i++)
    {
       if((computadoras + i)->velocidad == mayorVelocidad)
       {
            printf("\nComputadora %d", i);
            printf("\nVelocidad de la computadora: %d", (computadoras + i)->velocidad);
            printf("\nAño de la computadora: %d", (computadoras + i)->anio);     
            printf("\nNúmero de nucleos de la computadora: %d", (computadoras + i)->cantNucleos);
            printf("\nTipo de procesador de la computadora: %s", (computadoras + i)->tipo_cpu); 
            printf("\n"); 
       }   
    }
}