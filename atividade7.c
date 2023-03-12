#include <stdio.h>

int main(void){
    float n1, n2, AF, media;
    printf("Digite sua n1: ");
    scanf("%f", &n1);
    if(n1 >= 0){
        printf("Digite sua n2: ");
        scanf("%f", &n2);
        if(n2 >= 0){
            media = (n1*2+n2*3)/5;
            if(media >= 7){
                printf("Já foi aprovado.");
            }
            else{
                AF = 10 - media;
                printf("Você precisa tirar %f para ser aprovado.", AF);
            }
        }
        else{
            printf("Uma nota não pode ser negativa!");
        }
    }
    else{
        printf("Uma nota não pode ser negativa!");
    }
    return 0;
}