#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)

  return 0;
}
#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;
  int x = myAge >= votingAge;
  printf("%d", x); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  return 0;
}
