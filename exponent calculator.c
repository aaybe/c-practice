#include <stdio.h>

double power(double a, int n)
{
    double result = 0;      	//base case
    if (n == 0)        		    //any base raised to 0 will be 1
    return 1;
    else if (n == 1)       	    //any base raised to 1 will be itself
    return a;
    else if (n > 1)
    {
    result = a * power(a, n - 1);       //recursive case
    return result;
    }
    else if (n < 0)
    {
    result = (1 / power(a, -n));
    return result;
    }
    }


int main()
{
    //declare variables
    int base;  
    int exponent;
    //input values for base and exponent
    printf("Enter base: ");
    scanf("%i", &base);
    printf("Enter exponent: ");
    scanf("%i", &exponent);
    //Uses recursive function and prints result
    printf("%i raised to %i = %.2lf", base, exponent, power(base,exponent));

    return 0;
}
