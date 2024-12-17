#include <stdio.h>
int main() { /* inserts line number*/
	int c, nl;
	nl = 1;
	printf("/*%4d*/ %4c", nl, ' ');
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl; //putchar(c);
			printf("\n/*%4d*/ %4c", nl, ' ');
			}
		//else putchar(c);
		}
	}
