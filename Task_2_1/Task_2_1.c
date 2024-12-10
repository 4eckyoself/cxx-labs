#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	//Operators
	//unary: 
	//+, -
	//!
	//bit complement
	//++ increment,
	//decrement pre/post
	//*redicretion
	//& Adress operator
	//sizeof
	bool k = true;
	int a = 4;
	int b;
	printf("a ist %d\n", a);
	printf("k ist %b, wobei 1 -> True, 0 ->False\n", k);
	printf("\n");
	printf("Vorzeichenwechsel mit: -a\n");
	printf("a ist jetzt %d\n", -a);
	printf("\n");
	printf("negation mit: !a\n");
	printf("a ist jetzt: %d\n", !a);
	printf("\n");
	printf("bit complement mit a~:\n");
	printf("a ist jetzt: %d\n", ~a);
	printf("\n");
	printf("Inkrement mit ++a\n");
	printf("a ist immernoch %d, jetzt schreiben wir b = ++a \n", a);
	b = ++a;
	printf("bevor b = a ist, wird a um eins erhöht. b muss also jetzt 5 sein.\n");
	printf("b = %d, a = %d\n", b, a);
	printf("\n");
	printf("Jetzt Inkrement mit a++: \n");
	printf("jetzt schreiben wir: b = a++ -> b bleibt 5, während a jetzt 6 ist\n");
	b = a++;
	printf("b = %d, a = %d\n", b, a);
	
}
