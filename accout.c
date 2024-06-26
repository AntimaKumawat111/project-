// #include <stdio.h>
// #include <string.h>

void accout()
{
    char name[45];
    char address[45];
    char gender[45];
    char gmail[45];

    long long phoneNumber;
    long long aadharId, panCard, passport, voterId, drivingLicense;
    int date, year, month;

    printf("Give your Personal Information\n");
    printf("------\n");

    printf("Enter your full name ");
    scanf("%s", &name);

    printf("Enter your address without space\n  ");
    scanf("%s", &address);

    printf("Enter your date of birth date d , m , year \n");
    scanf("%d%d%d", &date, &month, &year);

    printf("Enter your Gender\n");
    scanf("%s", &gender);

    printf("*****\n");
    printf(" Give your Contact Information\n");
    printf("------\n");

    printf("Enter your phone number ");
    scanf("%lld", &phoneNumber);

    printf("Enter your g-mail address\n");
    scanf("%s", &gmail);

    printf("*****\n");
    printf(" Give your Proof of Identity and Address \n");
    printf("------\n");

    printf("Enter your aadhar Id\n");
    scanf("%lld", &panCard);

    printf("Enter your passport Id\n");
    scanf("%lld", &passport);

    printf("Enter your voterId Id\n");
    scanf("%lld", &voterId);

    printf("Enter your drivingLicense Id\n");
    scanf("%lld", &drivingLicense);

    printf("\n");
    printf("---------------------------\n");
    printf("\n");
    printf("Check your details\n");
    printf("The name is : %s", name);
    printf("The name is : %s", address);
    printf("the name is : %d : %d : %d ", date, month, year);
    printf("your Gender is %s\n", gender);
    printf("the phone number is : %lld\n", phoneNumber);
    printf("The g-mail address is : %s\n", gmail);
    printf("Your panCard Id is : %lld\n", panCard);
    printf("Your aadhar Id is : %lld\n", passport);
    printf("Your aadhar Id is : %lld\n", voterId);
    printf("Your aadhar Id is : %lld\n", drivingLicense);
    printf("Your account is openn");
}

// int main()
// {
//     accout();
//     return 0;
// }
