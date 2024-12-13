#include <stdio.h>
#include <stdlib.h>


#define abs(A) ( (A) < 0 ? -(A) : (A) ) /* "function" per definition */
#define DELTA 1.0e-16


double squareroot(double n) {
	double x = n, alt_x = 0;
	if (n < 0){
	printf("Wurzel aus negativen Zahlen kann ich leider nicht, programm neu starten\n");
	exit(1);
	}
	while ( abs(x - alt_x) > DELTA ) {
		alt_x = x;
		x = (n/x + x)/2;
		}
	return x;
	}
int main() {
	int i;
	double squareroot();
	for (i=-1; i < 10; i++)
		printf( "%d %20.16f\n", i, squareroot( (double)i ) );
}
