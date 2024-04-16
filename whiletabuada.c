#include <stdio.h>

int main()
{  
    int numeroescolhido= 0;
    printf ("\n digite um numero: ");
    scanf ("%d", &numeroescolhido );

    int contador = 1;
    while (contador < 11) {
        int resultado = numeroescolhido * contador;
        printf ("\n %d x %d = %d", numeroescolhido, contador , resultado);
        contador++;
    }
    

    return 0;
}
