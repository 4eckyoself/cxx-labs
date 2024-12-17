#include <stdio.h>
#include <ctype.h>


int main() { /* cryptograph */
	int c, s, newC;
	printf("Gib bitte dein Verschlüsselungsnummer ein.\n");
	printf("Bitte nur ganze, positive Zahlen\n");
	printf("Schlüssel: \n");
	scanf("%d\n", &s);
	while ( (c = getchar()) != EOF){
	if (((c > 64) & (c < 91))||(c>96)&(c<123)){
		newC = tolower(c);
		if((newC +s) >122 ){
			newC -= 25;
			}
		putchar(newC+s);
	}
	}
	}
