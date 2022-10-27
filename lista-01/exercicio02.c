#include <stdio.h>

int main(void){
    
    int x = 13;
    int *px = &x;
    
    float y = 13.5;
    float *py = &y;
    
    char z = 'G';
    char *pz = &z;

    printf("Primeira atribuição de valores: x = %d, y = %f, z = %c\n", x, y, z);
    
    x = 14;
    y = 14.5;
    z = 'I';
    
    printf("Valores modificados: x = %d, y = %f, z = %c\n", x, y, z);
    
    return 0;
}