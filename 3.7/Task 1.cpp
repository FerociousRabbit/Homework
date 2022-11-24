#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i < 101; i = i + 1)
    {
        sum = sum + i;
    }
    printf("%i", sum);
}
