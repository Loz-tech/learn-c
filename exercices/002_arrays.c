#include <stdio.h>

int main() {
  int array[5];

  array[0] = 4;
  array[1] = 3;
  array[2] = 5;
  array[4] = 6;

  for (int i = 0; i < (sizeof array/ sizeof array[0]); i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
