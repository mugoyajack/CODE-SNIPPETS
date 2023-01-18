#include <stdio.h>
#include <stdlib.h>
/**
 * gcd : Find gcd of any two numbers
 * If no argurments are provided the user will be prompted for the numbers
 * @m: Pointer to first number
 * @n: Pointer to the second number
 * Returns - The gcd of the two numbers
 */
void gcd(int *m, int *n)
{
    int mod = 0;
    mod = *m % *n;

    *m = *n;
    *n = mod;
    if (mod != 0)
    {
        gcd(m, n);
    }
}
int main(int argc, char *argv[])
{
    int a;
    int b;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    }
    else
    {

        printf(
            "---------------------------------------------------\n"
            "Simple program to calculate gcd of any two numbers.\n"
            "Usage 1: ./find_gcd num1 num2\n"
            "Usage 2: ./find_gcd\n"
            "\n"
            "---------------------------------------------------\n"
            "Enter first number: ");

        scanf("%i", &a);
        printf("Enter second number: ");

        scanf("%i", &b);
        printf("GCD of %i and %i is: ", a, b);
    }
    printf("\nGCD of %i and %i is: ", a, b);

    gcd(&a, &b);

    printf("%d\n", a);
}