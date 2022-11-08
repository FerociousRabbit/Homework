#include <stdio.h>

int main()
{
    int a,b;

    printf("а=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);
    if(a>b)
    {
        printf("Больше\n");
    }
    else
    {
        if (a==b)
        {
            printf("Равно\n");
        }
        else
        {
            printf("Меньше\n");
        }
    }

    return 0;
}
