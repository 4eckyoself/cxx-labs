/* Create a program that converts Celsius degrees to Fahrenheit degrees. Write one
version with the while construct, another with a for loop */

/*Formel: Celsius * (9/5) +32 = Fahrenheit */

#include <stdio.h>
#include <stdlib.h>

int main(){

float Celsius, Fahrenheit;
float i, step;
i = 0;
step = 2;
printf("Celsius 	Fahrenheit");
while(i <= 100){
	Celsius = i;
	Fahrenheit = (Celsius * (9./5.)) +32;
	i = i + step;
	printf("%3f\t %f\n", Celsius, Fahrenheit);
} 
}
