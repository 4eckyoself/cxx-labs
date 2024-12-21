#include <stdio.h>
#include <stdlib.h>




int main(){

	int power(int base, int n){
		if(n < 0){
			printf("negative potenzen sind leider nicht möglcih\n");
			exit(1);
		}
		int i;
		int p = 1;	
			for (i = n; i > 0; i--)
				//int x;
				//printf("p vorher: %d\n",x);
				p *= base;	
			return p;
	}	
	int fact(int y){
		if(y < 0){
			printf("Fakultät negativer zahlen leider nicht möglich\n");
			exit(1);
		}
		int result = 1;
		while (y != 0)
			result *= y--;
		return result;
	}
	int k; 
	for(k = 1 ; k<10; k++){
		printf("%d %6d %d\n", k, power(2,k), fact(k) );
	}
}


