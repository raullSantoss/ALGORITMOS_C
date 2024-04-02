#include <stdio.h>

int main()
{
    int n1 = 50;
    int n2 = 45;
    int soma = n1 +n2;
    printf("a soma dos numeros eh: %d", &soma);

    //incremento
    int numeroNovo =50;
    numeroNovo++; // numeroNovo = numeroNovo +1;
    numeroNovo++; // numeroNovo+ numeroNovo +1;
    printf("o numero novo vale %i", numeroNovo);
    return 0;
}
