/**
 * Faça um algoritmo para calcular a média
 * de duas notas do aluno, verifique se ele
 * está aprovado conforme as condições:
 * Se média >= 6.0 aprovado
 * Se média < 6.0 reprovado
*/


#include <stdio.h>

int main()
{
    float nota1 = 0.0;
    float nota2 = 0.0;

    printf ("\n digite a primeira nota: ");
    scanf ("%f", &nota1);

    printf ("\n digite a segunda nota: ");
    scanf ("%f", &nota2);
    float media = (nota1 + nota2) / 2;

    if (media >= 6.0)
    {
        printf ("\n voce esta aprovado com media: %.2f", media);
    } else {
        printf ("\n voce esta reprovado com media: %.2f", media);
    
    }
    

    return 0;
}
