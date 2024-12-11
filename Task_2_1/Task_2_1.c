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
	//*redicretion
	//decrement pre/post
	//& Adress operator
	//sizeof
	bool k = true;
	bool f = false;
	int a = 4;
	int b, s;
	int *p;
	printf("a ist %d\n", a);
	printf("k ist %b, wobei 1 -> True, 0 ->False\n\n", k);
	
	printf("Vorzeichenwechsel mit: -a\n");
	printf("a ist jetzt %d\n\n", -a);
	
	printf("negation mit: !k\n");
	printf("k ist jetzt: %d\n\n", !a);
	
	printf("bit complement mit a~:\n");
	printf("a ist jetzt: %d\n\n", ~a);
      
	printf("Inkrement mit ++a\n");
	printf("a ist immernoch %d, jetzt schreiben wir b = ++a \n", a);
	b = ++a;
	printf("bevor b = a ist, wird a um eins erhöht. b muss also jetzt 5 sein.\n");
	printf("b = %d, a = %d\n\n", b, a);
	
	printf("Jetzt Inkrement mit a++: \n");
	printf("jetzt schreiben wir: b = a++ -> b bleibt 5, während a jetzt 6 ist\n");
        b = a++;
	printf("b = %d, a = %d\n", b, a);
	printf("Decrement mit - funktioniert gleich\n\n");
	p = &a;
	printf("Wir definieren die Variable int *p; und schreiben: p = &a;\n");
	printf("p ist jetzt: %p\n\n", &p);
	printf("Der Pointer p zeigt jetzt auf die Adresse von a\n");
	printf("und der Wert von p ist der Wert, der auf der Adresse von a gespeichert ist.\n");
	printf("In diesem Fall: %d\n\n", *p);
	printf("jetzt der sizeof operator: wir lassen uns sizeof(a);  ausgeben:\n");
	s = sizeof(a);
	printf("a ist %d Byte gross\n\n\n", s);
	double x, y;
	x = 4; 
	y = 6;
	
	printf("jetzt die binary operators mit den floats x = %f, y = %f\n\n", x, y); 
	printf("x + y = %.2f\n",x+y);
	printf("x - y = %.2f\n", x-y);
	printf("x * y = %.2f\n", x*y);
	printf("x / y = %.2f\n", x/y);
	printf("(x modulo y) = %d\n\n\n\n", ((int)x % (int)y));
	printf("Jetzt relational (logical) operators mit a = %d, und b = %d:\n\n", a, b);
	if(a >b){
	  printf("a ist größer als b\n");
	}
	if(a >= b){
	  printf("a ist größer-gleich b\n");
	}
	if(b < a){
	  printf("b ist kleiner als a\n");
	}
	if(b <= a){
	  printf("b ist kleiner-gleich a\n");
	}
	if(b != a){
	  printf("a ist nicht-gleich b\n");
	}
	if(a == a){
	  printf("a ist gleich a\n\n\n");
	}
	printf("logische Vergleiche mit k = true, f = false\n");
	printf("k&&f: %b\n", k&f);
	printf("k||f: %b\n\n\n", k||f);
	printf("Bit arithmetic operators: mit char c = 0b00000001 \n");
	char c = 0b00000001;
	char d;
	printf("c = %d, c << 1 = %d\n", c, c<<2);
	printf("c ist jetzt: 0b00010000\n");
	c = 0b00010000;
	d = 0b00011111;
	printf("c = %d, c>>3 = %d\n\n\n", c, c>>3);
	printf("bitwise &: mit c = 0b00010000, d = 0b00011111\n");
	printf("c&d = %d\n\n\n", (c&d));
	printf("bitwise or mit c||d\n");
	printf("c|d = %d\n\n\n", c|d);
	printf("bitwise XOR mit c^d\n");
	printf("c^d = %d\n\n\n", c^d);
	
	printf("conditional operators (ternary)\n");
	printf("mit a = %d, b = %d\n", a, b);
	int l;
	printf(" wenn a > b ist, wird l = a, sonst l = b: \n");
        printf("mit l = (a>b)? a: b;\n");
        l = (a>b)? a:b;
        printf("l = %d\n\n\n\n", l);
        printf("assignment operators: Zum Beispiel a = a+7 entspricht a +=7\n");
        a += 7;
        printf("a = %d\n", a);
	
}
