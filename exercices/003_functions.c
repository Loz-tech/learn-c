#include "stdio.h"

int square(int x) {
  return x*x;
}

void hello(void) {
  puts("Hello void function");
}

int main() {
    int result = square(2);

    printf("square of two is = %d\n", result);
    hello();

    return 0;
}
