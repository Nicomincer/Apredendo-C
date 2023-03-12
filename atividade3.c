#include <stdio.h>

int main(void){
    int number;
    int numero_de_divisores = 0;
    int contagem=1;
    printf("Digite um número: ");
    scanf("%d", &number);
    while(contagem <= number){
        if(number%contagem == 0){
            numero_de_divisores += 1;
            contagem += 1;
        }
        else{
            contagem += 1;
        }
    };
    if(numero_de_divisores == 2){
        printf("O número %d é primo.", number);
    }
    else{
        printf("O número %d não é primo.", number);
        if(number < 0){
            printf(" Pois para ser um número primo é necessário ter somente 2 divisores distintos e naturais.");
        }
        else if(number == 0){
            printf(" pois tem infinitos divisores.");
        }
    }
    return 0;
}