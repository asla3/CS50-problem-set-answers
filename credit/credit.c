#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get user's credit card number
    long card = 4003600000000014;
    printf("%li\n", (card - (card % 10)) % 1000);
}