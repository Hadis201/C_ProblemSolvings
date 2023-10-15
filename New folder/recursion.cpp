#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int num)
{
    if (num>0)
        return num + sum(num-1);
    else
        return 0;
}
