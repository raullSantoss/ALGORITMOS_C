#include <stdio.h>

int main()
{
    int temperatura = 0;

    printf("\n qual a temperatura atual?");
    scanf("%d", &temperatura);

    if (temperatura <= 13)
    {
        printf ("\n esta muito frio hoje");
    }
        else if (temperatura >13 && temperatura <=25 )
    {
        printf("\n o clima esta agradavel hoje");
    }
    else if (temperatura >25 && temperatura <=32 )
    {
        printf("\n esta calor hoje");
    }
     else if (temperatura >32)
    {
        printf("\n esta muito calor hoje");
    }
    
    return 0;
}
