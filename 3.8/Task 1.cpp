#include <stdio.h>

int main()
{
    int i = 0, max = 0, min = 0, sum = 0, a = 0;
    printf("Укажите количество чисел, которое хотите ввести:");
    scanf("%i", &i);

    for (int j = 0; j < i; j++)
    {
        printf("Введите число:");
        scanf("%i", &a);

        sum = sum + a;

        if (j == 0)
        {
            max = a;
        }
        
        else if (max < a)
        {
            max = a;
        }
        if (j == 0)
        {
            min = a;
        }
        else if (min > a)
        {
            min = a;
        }
    }

    printf("Сумма чисел = %i\n", sum);
    printf("Среднее значение = %i\n", sum / i);
    printf("Максимальное число = %i\n", max);
    printf("Минимальное число = %i\n", min);
}
