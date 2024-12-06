#include <stdio.h>
#include <stdlib.h>
int main() {
int test = 5000;
int fahr, celsius; /* Variable Declaration */
int lower, upper, step; /* from int-Typ */
lower = 0; /* lower limit... */
upper = 300; /* upper table limit */
step = 20; /* step size */
fahr = lower;
while (fahr <= upper) { /* while-construct */
celsius = 5 * (fahr - 32) / 9;
printf("%3d %6dn n", fahr, celsius);
fahr = fahr + step;
}
}
