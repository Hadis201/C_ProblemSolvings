#include <stdio.h>
#include<string.h>

int main() {
  int age;
  scanf("%d", &age);

  char cntry[20];
  scanf("%s", &cntry);\

  for (int i = 0; cntry[i]/*i<sizeof(cntry)/sizeof(cntry[0])*/; i++)
  {
    cntry[i] = toupper(cntry[i]);
  }
  //printf("%s\n", cntry);
  (age >= 18 && strcmp(cntry, "BANGLADESH") ==0 ) ? printf("Bangladeshi voter.") : printf("Not eligible for Bangladeshi voter.");
  return 0;
}
