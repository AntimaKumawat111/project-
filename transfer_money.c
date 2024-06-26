

// #include <stdio.h>
// #include <string.h>

void transferMoney()
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

long giveMoney()
{
    long give_money;
    printf("how much money do you want to transfer \n");
    scanf("%ld", &give_money);
    printf("-----Money tranfered-----\n");
    return give_money;
}

void checkBalance(long give_money)
{
    printf("hi\n");
    long balance = give_money;
    printf("Your account total money\n");
    if (give_money == 0)
    {
        printf("Your account is empty\n");
    }
    if (give_money > 0)
    {
        printf("In your bank Your amount is %ld\n", give_money);
    }
}

// int main()
// {
//     // transferMoney();
//     long gm = giveMoney(565252);
//     checkBalance(gm);

//     return 0;
// }