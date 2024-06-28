

// #include <stdio.h>
// #include <string.h>

void transferMoneyDetails()
{
    long long accoutNumber, recipentBankNumber;
    char recipentName[45];
    printf("Enter details\n");
    printf("------\n");
    printf("Your bank account number ");
    scanf("%lld", &accoutNumber);
    printf("Recipient's bank account number ");
    scanf("%lld", &recipentBankNumber);
    printf("Recipient's name ");
    scanf("%s", &recipentName);
    printf("------\n");
}

void checkBalance(long give_money)
{
    long balance = give_money;
    printf("Total money in your accout ");
    if (give_money == 0)
    {
        printf("Your account is empty\n");
    }
    if (give_money > 0)
    {
        printf("is %ld\n", give_money);
    }
}
void giveMoney()
{
    long give_money;
    printf("how much money do you want to transfer \n");
    scanf("%ld", &give_money);
    printf("-----Money tranfered successfuly-----\n");
    checkBalance(give_money);

}
// int main()
// {
//     // transferMoney();
//     giveMoney();
//     // checkBalance(gm);
//     return 0;
// }
