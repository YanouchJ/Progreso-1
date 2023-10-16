#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Suma de Gauss */
    int n, suma, i;
    printf ("Ingrese un numero entero: ");
    scanf ("%d", &n);
    
    for ( i = 1; i < n; i++)
    {
        suma=suma+i;
    }
    printf("Suma total: %d" ,suma);
    
    return 0;
}
