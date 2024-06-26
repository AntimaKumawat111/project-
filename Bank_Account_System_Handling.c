#include <stdio.h>
#include <string.h>
#include "accout.c"
#include "transfer_money.c"

int main()
{
    FILE *ptrtm = fopen("transfer_money.c", "r");
    FILE *ptr = fopen("accout.c", "r");
    int number, n;
    printf("---------\n");
    printf("If you want to open an accout Enter - 1 \n");
    printf(" If you want to tranfer money Enter - 2\n");
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
        transferMoney();
        long gm = giveMoney(565252);
        printf("If you want to check your balace Enter - 1\n");
        printf("Enter : ");
        scanf("%d", &n);
        if (n == 1)
            checkBalance(gm);
        else
            break;

    default:
        break;

    }
   
    return 0;
}