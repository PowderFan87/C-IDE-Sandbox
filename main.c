#include <stdio.h>
#include <math.h>

unsigned long long int fact(int);
long double expo(double, int);

int main()
{
    printf("Hello World\n\n");

    printf(" 5!  = %llu\n", fact(5));
    printf(" 9!  = %llu\n", fact(9));
    printf("50!  = %llu\n", fact(50));

    printf("\n");

    printf("e^1             = %Lf\n", expo(1, 20));
    printf("exp(1)          = %f\n", exp(1));

    printf("e^0             = %Lf\n", expo(0, 20));
    printf("exp(0)          = %f\n", exp(0));

    printf("e^2             = %Lf\n", expo(2, 20));
    printf("exp(2)          = %f\n", exp(2));

    printf("e^3             = %Lf\n", expo(3, 20));
    printf("exp(3)          = %f\n", exp(3));

    printf("e^4             = %Lf\n", expo(4, 20));
    printf("exp(4)          = %f\n", exp(4));

    printf("e^2+3           = %Lf\n", expo(2+3, 20));
    printf("exp(2+3)        = %f\n", exp(2+3));

    printf("e^2 * e^3       = %Lf\n", (expo(2, 20) * expo(3, 20)));
    printf("exp(2) * exp(3) = %f\n", (exp(2) * exp(3)));

    return 0;
}

unsigned long long int fact(int n) {
  if (n > 1) {
    return fact(n-1) * n;
  } else {
    return n;
  }
}

long double expo(double x, int n) {
  if (n > 0) {
    return expo(x, n-1) + (pow(x, n) / fact(n));
  } else {
    return 1;
  }
}