#include <stdio.h>

unsigned long long int fact(int);

int main()
{
    printf("Hello World\n");

    printf("5!   = %llu\n", fact(5));
    printf("9!   = %llu\n", fact(9));
    printf("50!  = %llu\n", fact(50));

    return 0;
}

unsigned long long int fact(int n) {
  if (n > 1) {
    return fact(n-1) * n;
  } else {
    return n;
  }
}