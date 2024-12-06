/* Create a program that converts Celsius degrees to Fahrenheit degrees. Write one
version with the while construct, another with a for loop. */

/*	Formel: (Celsius* 9/5) +32 = Fahrenheit		*/


#include <stdio.h>
#include <stdlib.h>

int main (){
float Celsius, Fahrenheit;
float i,step;
step = 2;
printf("Celsius 	Fahrenheit\n");
//printf("Celsius		Fahrenheit\n");
for(i = 0; i <= 100; i = i + step){
	Celsius = i;
	//printf("%f\n", i);
	Fahrenheit = (Celsius * (9./5.)) + 32 ;
	printf("%3f\t %3f\n", Celsius, Fahrenheit);
	}
}
