#include <stdio.h>

int main()
{
    float reais = 0;

    printf("\n quantos reais voce tem?:");
    scanf ("%f", &reais);

    float dolares = reais / 5;

    printf ("\n voce tem em dolares %.2f", dolares);

    return 0;
}
