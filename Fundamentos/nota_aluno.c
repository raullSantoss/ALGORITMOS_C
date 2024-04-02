/*
Nota
*/

#include <stdio.h>

int main(){
    printf("---Calcula nota do aluno---");

    //Declaracao de variaveis

    int prova1 = 0;
    int prova2 = 0;

    //O usuario digita as notas
    printf("\n Digite a nota da prova 1: ");
    scanf("%d", &prova1);

    printf("\n Digite a nota da Segunda prova: ");
    scanf("%d", &prova2);

    //Processamento, os calculos
    float soma = prova1 + prova2;
    float media = soma / 2;

    //Saida a mensagem
    printf("A media e: %.2f", media);

    return 0;
}