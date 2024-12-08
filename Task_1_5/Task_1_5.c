#include <stdio.h>
#include <stdlib.h>

int main(){
	int c;
	c = getchar();
	while (c != EOF){
		//printf("%d", c);
		putchar(c);
		c = getchar();
		if(c == 32) c = 10;
	}
}
