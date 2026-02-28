#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;
    
    printf("Digite a nota1: \n");
    scanf("%f", &nota1);

    printf("Digite a nota2: \n");
    scanf("%f", &nota2);

    printf("Digite a nota3: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 +nota3) / 3;

    printf("O resultado da media é: %.2f", media);

    return 0;
}


