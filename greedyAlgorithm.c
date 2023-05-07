#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents -= quarters * 25;
	// Print the number of quarters to give back to the customer
    printf("Quarters: %i\n", quarters);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents -= dimes * 10;
	// Print the number of dimes to give back to the customer
    printf("Dimes: %i\n", dimes);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents -= nickels * 5;
	// Print the number of nickels to give back to the customer
    printf("Nickels: %i\n", nickels);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents -= pennies * 1;
	// Print the number of pennies to give back to the customer
    printf("Pennies: %i\n", pennies);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Number of coins to give back: %i\n", coins);
}

int get_cents(void)
{
    int input_integer;
    do
    {
        input_integer = get_int("Give change: ");
    }
    while (input_integer < 0);

    return input_integer;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents;
}
