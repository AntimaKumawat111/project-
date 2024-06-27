#include <stdio.h>
#include <string.h>
#include "accout.c"
#include "transfer_money.c"

int main()
{
    FILE *ptrtm = fopen("transfer_money.c", "r");
    FILE *ptr = fopen("accout.c", "r");
    int number, n, num;
    printf("Choose--------->\n");
    printf("If you want to open an accout Enter - 1 \n");
    printf("If you want to tranfer money Enter - 2\n");
    printf("---------\n");
    printf("Enter : ");
    scanf("%d", &number);
    printf("---------\n");

    switch (number)
    {
    case 1:
        accout();
        break;
    case 2:

        printf("If your transfer money 1st time , Enter 1: ");
        scanf("%d", &num);
        if (num == 1)
        {
            transferMoneyDetails();
        }
        giveMoney();

    default:
        break;
    }

    return 0;
}