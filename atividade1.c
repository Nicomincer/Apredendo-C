#include <stdio.h>

int main(void){
    int numero, dobro;
    printf("DIgite um número: ");
    scanf("%d", &numero);
    dobro = numero*2;
    printf("O dobro do número %d é %d", numero, dobro);
    return 0;
}