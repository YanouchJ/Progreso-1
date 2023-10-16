#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Suma de Gauss */
    int num, suma, i, total;
    printf ("SUMA DE GAUSS");
    printf ("Ingrese un numero entero: ");
    scanf ("%d", &num);
    
    for ( i=1; i<num; i++)
    {
        suma=suma+i;
        total=suma+num;
    }
    printf("Suma total: %d" , total);

    return 0;
}
