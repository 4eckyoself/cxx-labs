#include <stdio.h>
#include <stdlib.h>
int main () {
  int a, b, c;
  printf("Input a, b : ");
  scanf("%d %d", a, b);
  while (b != 0) {
    c = a % b; a = b; b = c;
  }
printf("%s %d\n","ggt =", a);
}
