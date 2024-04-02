#include <stdio.h>

int main()
{
    int mesNumero = 0;
    printf("Digite o numero do mes");
    scanf("%i", &mesNumero);

    switch (mesNumero)
    {
    case 1:
       printf("Estamos no mes de Janeiro");
        break;
    case 2:
    printf("Estamos no mes de Fevereiro");
    break;
    case 3 :
    printf ("estamos no mes de marco");
    break;
    case 4:
    printf ("Estamos no mes de abril");
    break;
    case 5:
    printf ("Estamos no mes de maio");
    break;
    case 6:
    printf ("Estamos no mes de junho");
    break;
    default:
    printf ("Mes invalido queridao");
        break;
    }
    return 0;
}
