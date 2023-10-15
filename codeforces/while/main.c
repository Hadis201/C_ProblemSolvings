#include <stdio.h>

int main() {
  int i = 20;

  while (i--) {
    printf("%d\n", i);
    if (i == 4)break;
  }

  return 0;
}

