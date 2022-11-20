#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 9)
    {
        printf("Hello\n");
        i = i + 1;
    }

    i = 0;
    while (i < 15)
    {
        if (i%2==1)
        {
            printf("%i\n",i);
        }
        i = i + 1;
    }

    i = 5;
    int sum=0;
    while (i < 16)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%i",sum);
}
