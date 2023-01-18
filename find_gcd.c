#include <stdio.h>
/**
 * gcd : Find gcd of any two numbers
 * @m: Pointer to first number
 * @n: Pointer to the second number
 * Returns - The gcd of the two numbers
*/
int gcd(int *m, int *n)
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
int main()
{
    int a = 3740;
    int b = 3094;
    gcd(&a, &b);
    printf("%d",a);
}