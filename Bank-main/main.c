#include <stdio.h>
#include <stdlib.h>

int deposit(amount)
{
    int value;
    printf("\nEnter The Amount You Want: ");
    scanf("%d",&value) ;
    if (value != 0 || value != " ")
    {
        if (value > 0)
        {
            amount += value;
            printf("You Deposit: %d\n", value);
            printf("Your Current Amount Is: %d\n",amount);
            return(amount);
        }
        else if (!(value > 0))
        {
            printf("You Can't Deposit: %d\n", value);
        }
    }
    return amount;
}

int withdraw(amount)
{
    int value;
    printf("\nEnter The Amount You Want: ");
    scanf("%d",&value) ;
    if (value != 0 || value != " " || !(value > 0))
    {
        if (!(value > 0))
        {
            printf("You Can't Withdraw: %d\n", value);
        }
        else if (amount >= value)
        {
            amount -= value;
            printf("\nYou Withdraw: %d\n", value);
            printf("Your Current Amount Is: %d\n", amount);
        }
        else if (amount < value)
        {
            printf("You Did Not Have Enough Money...\n");
            printf("Your Current Amount Is: %d\n", amount);
        }
    }
    return(amount);
}

int transfer(user, amount)
{
    int account_Two, transfer;
    printf("\nEnter A Id To Transfer To It: ");
    scanf("%d", &account_Two);
    if (account_Two == user)
    {
        printf("You Can't Transfer To Yourself...\n");
    }
    else if (account_Two != user && account_Two != " " && account_Two >= 0)
    {
        printf("Enter A Amount To Transfer: ");
        scanf("%d", &transfer);
        if (transfer <= amount && transfer > 0)
        {
            amount -= transfer;
            printf("The Transfer Has Been Done...\n");
            printf("Your Current Amount Is: %d\n",amount);
        }
        else if (!(transfer > 0))
        {
            printf("You Can't transfer: %d\n", transfer);
        }
        else if (transfer > amount)
        {
            printf("You Did Not Have Enough Money...\n");
            printf("Your Current Amount Is: %d\n",amount);
        }
    }
    return(amount);
}

int account_details(user, amount)
{
    printf("-> User: %d\n-> Amount: %d\n", user, amount);
}

int menu()
{
    int user;
    int amount;
    printf("Enter Your Account Number: ");
    scanf("%d", &user);
    if (user < 1 || user > 50)
    {
        printf("Invalid ! Enter Number Between 1 : 50 \n ");
    }
    else
    {
        while (1 == 1)
        {
            int operation;
            printf("\n[0]  To Deposit\n");
            printf("[1]  To Withdraw\n");
            printf("[2]  To Transfer\n");
            printf("[3]  To Account details\n");
            printf("[99] To Exit\n-> ");
            scanf("%d",&operation);
            if(operation == 0)
            {
                amount = (deposit(amount));
            }
            else if(operation == 1)
            {
                amount =( withdraw(amount));
            }
            else if(operation == 2)
            {
                amount = (transfer(user, amount));
            }
            else if(operation == 3)
            {
                account_details(user, amount);
            }
            else if(operation == 99)
            {
                printf("Exiting\n");
                break;
            }
            else if (operation != 0 ||operation != 1 ||operation != 2 ||operation != 3 ||operation != 99 )
            {
                printf("Invalid ! Please Enter True Operation Number \n");



            }
        }
    }
    int user_accounts[50];
}

int main()
{
    menu();
    return 0;
}
