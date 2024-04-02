/*
Exemplo de algoritmo com declaração de variaveis em C
*/
#include <stdio.h>

int main()
{
    int idade = 15;
    float altura =1.70;
    char *letra = "P";
    char nome[] = "Pedro";

    printf("---Meus dados pessoais---");
    printf("\n Meu nome: %s", nome);
    printf("\n Minha letra inicial: %s" , letra);
    printf("\n Minha idade: %d", idade);
    printf("\n Minha altura: %.2f\n", altura);

    return 0;
}