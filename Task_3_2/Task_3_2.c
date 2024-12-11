#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c;
  int s;
  //printf("Input a, b : ");
  //scanf ("%d %d", &a, &b);
  while(1){
    printf("Input a, b : ");
    scanf ("%d %d", &a, &b);
    c = a % b; a = b; b = c;
    printf("ggt = %d\n", a);
    printf("Nochmal ? 1/0\n");
    scanf("%d", &s);
    if(s == 1){
      
      printf("Ok, nochmal: \n");
      
    }else {
    printf("Bis zum nächsten mal hahahaha");
    return 0;
    }
    
    }
    
    
    
  }

