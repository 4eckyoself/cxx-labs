#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){

int c;
printf("%d", EOF);
c = getchar();
//printf("%d", EOF);
while(c != EOF){
	putchar(c);
	c = getchar();
	//if (getchar() != EOF) printf("yo");
	printf("Wert: %d\n", c);
}


}
