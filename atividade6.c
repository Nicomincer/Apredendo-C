#include <stdio.h>

int main(void){
    float l1, l2, l3;
    printf("Digite l1:" );
    scanf("%f", &l1);
    printf("Digite l2:" );
    scanf("%f", &l2);
    printf("Digite l3:" );
    scanf("%f", &l3);
    if(l1+l2 > l3 && l2+l3 > l1 && l1+l3 > l2){
        printf("É um triângulo e é ");
        if(l1==l2 && l2==l3){
            printf("equilatero.");
        }
        else if(l1 != l2 && l1 != l3 && l3 != l2){
            printf("escaleno.");
        }
        else{
            printf("isósceles.");
        }
    }
    else{
        printf("Não é um triângulo.");
    }
    return 0;
}