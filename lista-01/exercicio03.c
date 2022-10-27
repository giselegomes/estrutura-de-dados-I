#include <stdio.h>

int main(void) {

	int x = 12;
	int *px = &x;
	
	int y = 10;
	int *py = &y;
	
	printf("Endereço de x = %x\n", &x);
	printf("Endereço de y = %x\n", &y);
	
	if (&x > &y) { 
        printf("A variável com o maior endereço é a variável x\n");
    } 
    else {
        printf("A variável com o maior endereço é a variável y\n");
    }
}