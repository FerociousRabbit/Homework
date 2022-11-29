#include <stdio.h>

int main()
{
    int j=0;
    printf("Введите размер массива:");
    scanf("%i", &j);
    int mas[j];

    printf("Введите значения массива\n");

    for(int i=0; i<j;i++)
    {
        scanf("%i", &mas[i]);
    }
    
    for(int i=0; i<j;i++)
    {
        printf("%i ", mas[i]);
    }
}