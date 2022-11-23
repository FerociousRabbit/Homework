#include <stdio.h>

int main()
{
    int a = 0;
    while (a != 7)
    {
        scanf("%i", &a);
        for (int i = 7; i < 11;)
        {
            if (a > i)
            {
                printf("Введенное число больше %i\n", i);
            }
            else
            {
                printf("Введенное число меньше %i\n", i);
            }
            i = i + 3;
        }

        for (int i = 7; i < 11;)
        {

            for (int j = 2; j < 4; j++)
            {
                if (a % j == 0)
                {
                    printf("Делится на %i\n", j);
                }
                else
                {
                    printf("Не делится на %i\n", j);
                }
                i = i + 3;
            }
        }
    }
}
