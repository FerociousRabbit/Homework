#include <stdio.h>

int main()
{
    int login, pass;

    printf("login = ");
    scanf("%i",&login);
    printf("pass = ");
    scanf("%i",&pass);

    if (((login==123)&&(pass==123))||((login==321)&&(pass==321)))
    {
        printf("Вход выполнен.\n");
    }
    else
    {
        printf("Ошибка.\n");
    } 

}
