#include <cs50.h>
#include <stdio.h>
#include <math.h>

long mor(long dig);    // function for checking the digit digit*2 > 10 [cont. line 57]
long lastd(long card); // function for taking the remainder [cont. line 55]
int main(void)
{
    long crd; // card number

    do
    {
        crd = get_long("Number: ");
    } while (crd <= 0);

    long digit1 = lastd(crd); // extracting digits
    long digit2 = mor(lastd((crd / 10)));
    long digit3 = lastd((crd / 100));
    long digit4 = mor(lastd((crd / 1000)));
    long digit5 = lastd((crd / 10000));
    long digit6 = mor(lastd((crd / 100000)));
    long digit7 = lastd((crd / 1000000));
    long digit8 = mor(lastd((crd / 10000000)));
    long digit9 = lastd((crd / 100000000));
    long digit10 = mor(lastd((crd / 1000000000)));
    long digit11 = lastd((crd / 10000000000));
    long digit12 = mor(lastd((crd / 100000000000)));
    long digit13 = lastd((crd / 1000000000000));
    long digit14 = mor(lastd((crd / 10000000000000)));
    long digit15 = lastd((crd / 100000000000000));
    long digit16 = mor(lastd((crd / 1000000000000000)));

    int sum1 = digit2 + digit4 + digit6 + digit8 + digit10 + digit12 + digit14 + digit16; // first summation (even indices)*2
    int sum2 = sum1 + digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13 +
               digit15; // second summation (sum1 + odd indices)

    if (sum2 % 10 == 0) // checking cratiria
    {
        if (digit16 == 1 && (digit15 > 0 && digit15 < 6))
        {
            printf("MASTERCARD\n");
        }
        else if (digit16 == 0 && digit15 == 3 && (digit14 == 8 || digit14 == 5)) // determine card type
        {
            printf("AMEX\n");
        }
        else if ((digit16 == 0 && digit15 == 0 && digit14 == 0 && digit13 == 4) || (digit16 == 8))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

long lastd(long card) // function for taking the remainder
{
    return card % 10;
}
long mor(long dig) // function for checking the digit digit*2 > 10
{
    if (dig == 5)
    {
        dig = 1;
        return dig;
    }
    else if (dig == 6)
    {
        dig = 3;
        return dig;
    }
    else if (dig == 7)
    {
        dig = 5;
        return dig;
    }
    else if (dig == 8)
    {
        dig = 7;
        return dig;
    }
    else if (dig == 9)
    {
        dig = 9;
        return dig;
    }
    else
    {
        return dig * 2;
    }
}
