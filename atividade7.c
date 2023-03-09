#include <stdio.h>

int main(void){
    float n1, n2, AF, media;
    printf("Digite sua n1: ");
    scanf("%f", &n1);
    printf("Digite sua n2: ");
    scanf("%f", &n2);
    media = (n1*2+n2*3)/5;
    if(media >= 7){
        printf("Já foi aprovado.");
    }
    else{
        AF = 10 - media;
        printf("Você precisa tirar %f para ser aprovado.", AF);
    }
    return 0;
}