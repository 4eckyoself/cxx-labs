#include <stdio.h>
#include <stdlib.h>
#define TRUE 1 /* global constants deklaration */
#define FALSE 0
#define MAX 10000
int main() {
  int i,prime,k,count,size;
  char flags[MAX]; /* array declaration of .. */
                   /* MAX variable flags[0], ...flags[MAX - 1] */
  /* of type "character"; 1 byte */
  printf("Determination of all prime numbers up to ");  scanf("%d", &size);
  size = (size+1)/2-2; count = 1; /* only odd numbers           are               filtered */
  
  for (i = 0; i <= size; i++) /* initialize the ... */
    flags[i]=TRUE; /* ... whole array */
  for (i = 0; i <= size; i++) {
    if (flags[i]) { /* if flag[i]=TRUE, then i+i+3 prim */
        
        //printf("Primzahlen %d\t: %d\n",count, 2);
        printf("Primzahl %d\t: %d\n",count, prime);
        prime = i+i+3; k=i+prime;
        
          while (k<=size) { /* allthow scretch all ... */
            flags[k] = FALSE; k += prime; /* nontrivial */
            } /* multiples */
count++; /* and count. */
        }
      }
      printf("\n2 ist auch eine Primzahl\n");
      printf("Primzahl %d\t: %d\n",count, 2);
      printf("\n%d primes\n",count);
}
