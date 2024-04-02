/**
 * Faça um algoritmo que solicite o 
 * numero do mes e mostre o seu nome
*/

#include <stdio.h>

int main()
{
    // declaração de variáveis
    int numeroMes = 0;

    printf ("digite o numero do mes");
    scanf ("%d", &numeroMes);
    
    // processamento
    if (numeroMes== 1)
    {
         printf  ("Estamos no mes de janeiro, com muito calor");
    } else if (numeroMes == 2)
    {
        printf("\n Estamos no mes de fevereiro, com feiriado");
    }
    else if (numeroMes == 3)
    {
        printf ("Estamos no mes de marco, proximos da pascoa");
    }
    else if (numeroMes == 4)
    {
        printf ("estamos no mes de abril, proximos ao outono");
    }
    else if (numeroMes == 5)
    {
        printf ("estamos no mes de maio, perto do dia das maes");
    }
    else if (numeroMes == 6)
    {
        printf(" estamos proximos da festa junina");
    }
    else if (numeroMes > 12)
    {
        printf ("numero do mes invalido queridao");
    }
    //saída
    return 0;
}
