#include <stdio.h>

int main()
{
    float peso = 0;
    printf("\n quanto voce pesa?:");
    scanf ("%f", &peso);
    if (peso > 70)
    {
        printf ("\n voce esta acima do peso");
    }
    
    if (peso < 70)
    {
    printf ("\n voce esta no peso ideal");
    }
   
    return 0;
}
