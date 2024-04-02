#include <stdio.h>

int main()
{
    int idade = 0;

    printf("\n qual sua idade? ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("\n voce eh maior de idade");
    }
    else
    {
        printf("\n voce nao eh maior de idade");
    }

    return 0;
}
