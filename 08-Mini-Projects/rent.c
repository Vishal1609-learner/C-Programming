
#include <stdio.h>

int main()
{
    int rent, maintenance;
    int monthly_amount, annual_amount;
    int tax, final_amount;

    // Input from tenant
    printf("Enter Monthly Rent: ");
    scanf("%d", &rent);

    printf("Enter Monthly Maintenance Charges: ");
    scanf("%d", &maintenance);

    // Calculate monthly amount
    monthly_amount = rent + maintenance;

    // Calculate annual amount for 12 months
    annual_amount = monthly_amount * 12;

    // Calculate tax
    if(annual_amount > 100000)
    {
        tax = 1500;
    }
    else
    {
        tax = 350;
    }

    // Calculate final amount
    final_amount = annual_amount + tax;

    // Display results
    printf("\n----- Rent Calculation -----\n");
    printf("Monthly Amount: Rs. %d\n", monthly_amount);
    printf("Annual Amount: Rs. %d\n", annual_amount);
    printf("Tax Amount: Rs. %d\n", tax);
    printf("Final Amount: Rs. %d\n", final_amount);

    return 0;
}
